#include "binary_trees.h"
/**
 * binary_tree_height_2 - A function that will measure the
 * height of the binary tree for the balance factor.
 * @tree: Is the pointer to the node of the tree to measure
 * the height
 * Return: The height of the tree
 */
size_t binary_tree_height_2(const binary_tree_t *tree)
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
			left = tree->left ? 1 + binary_tree_height_2(tree->left) : 0;
			right = tree->right ? 1 + binary_tree_height_2(tree->right) : 0;
		}
		return ((left > right) ? left : right);
	}
}
