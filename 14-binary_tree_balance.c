#include "binary_trees.h"

/**
 * binary_tree_balance - finds balance of tree at root
 * @tree: root node
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_side;
	int right_side;
	int balance;

	if (tree == NULL)
		return (0);
	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);
	balance = left_side - right_side;
	return (balance);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * to measure the height.
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

