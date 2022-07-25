#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the nodo_new node
 * Return: pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo_new;

	if (!(parent))
		return (NULL);
	nodo_new = malloc(sizeof(binary_tree_t));
	if (!(nodo_new))
		return (NULL);
	nodo_new->n = value;
	nodo_new->parent = parent;
	nodo_new->left = NULL;
	nodo_new->right = NULL;

	if (!(parent->right))
		parent->right = nodo_new;
	else
	{
		parent->right->parent = nodo_new;
		nodo_new->right = parent->right;
		parent->right = nodo_new;
	}

	return (nodo_new);
}
