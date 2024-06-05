#include "binary_trees.h"
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
		left = ((int)binary_tree_height_2(tree->left));
		right = ((int)binary_tree_height_2(tree->right));
		total = left - right;
	}
	return (total);
}
