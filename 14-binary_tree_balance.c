#include "binary_trees.h"
/**
 * binary_tree_height_c - A function that will measure the
 * height of binary tree for the balance factor.
 * @tree: Is the pointer to the node of the tree to measure
 * the height
 * Return: The height of the tree
 */
size_t binary_tree_height_c(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left = tree->left ? 1 + binary_tree_height_c(tree->left) : 0;
			right = tree->right ? 1 + binary_tree_height_c(tree->right) : 0;
		}
		return ((left > right) ? left : right);
	}
}
/**
 * binary_tree_balance - The function will measure the balance
 * factor for the binary tree.
 * @tree: tree is the pointer to the root node of the tree
 * to measure the balance factor.
 * Return: Always the balanced factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;
	int total = 0;

	if (tree);
	{
		left = ((int)binary_tree_height_c(tree->left));
		right = ((int)binary_tree_height_c(tree->right));
		total = left - right;
	}
	return (total);
}
