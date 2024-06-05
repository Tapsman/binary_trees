#include "binary_trees.h"
/**
 * binary_tree_is_full - A function that will check if
 * the binary tree is full
 * @tree: Is the pointer of the root node of the tree to check.
 * Return: 1 if its full, or 0 if its not full.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left && tree->right)
		{
			left = binary_tree_is_full(tree->left);
			right = binary_tree_is_full(tree->right);
			if (left == 0)
			{
				return (0);
			}
			else if (right == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (!tree->left && !tree->right)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
