#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: NULL if the node or the parent is NULL
 * If node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int me;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	me = node->n;
	if (node->parent->left && node->parent->right)
	{
		if (node->parent->left->n != me)
		{
			return (node->parent->left);
		}
		if (node->parent->right->n != me)
		{
			return (node->parent->right);
		}
	}
	return (NULL);
}
