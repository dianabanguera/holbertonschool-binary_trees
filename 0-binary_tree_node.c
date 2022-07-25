#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node_new
 * @parent: pointer to the parent node_new of the node_new to create
 * @value: value to put in the new node_new
 * Return: pointer to the new node_new, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node_new;

	node_new = malloc(sizeof(binary_tree_t));
	if (!(node_new))
		return (NULL);
	node_new->n = value;
	node_new->parent = parent;
	node_new->left = NULL;
	node_new->right = NULL;
	return (node_new);
}

