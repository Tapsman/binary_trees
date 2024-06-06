#include "binary_trees.h"
/**
 * tree_is_perfect - This function will check if a
 * tree is indeed perfect.
 * @tree: Is a pointer to the root node of the tree to be checked.
 * Return: 0 if the binary tree is not perfect, or number
 * that is in the same length as of the height.
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree->left && tree->right)
	{
		left = tree_is_perfect(tree->left) + 1;
		right = tree_is_perfect(tree->right) + 1;
		if (right == left && right != 0 && left != 0)
			return (right);
		return (0);
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
/**
 * binary_tree_is_perfect - This function will check if the binary
 * tree is perfect or if its not a tree.
 * @tree: Is the pointer to the root of the node to be checked.
 * Return: 1 if it is perfect, 0 if it is not.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int res = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		res = tree_is_perfect(tree);
		if (res != 0)
		{
			return (1);
		}
		return (0);
	}
}
