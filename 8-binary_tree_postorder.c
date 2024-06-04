#include "binary_trees.h"
/**
 * binary_tree_postorder - The function will go through binary tree
 * using a post-order traversal.
 * @tree: The tree is a pointer to the root node
 * @func: Is the function to call each node.
 * Return: just nothing at all
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
	}
	func(tree->n);
}
