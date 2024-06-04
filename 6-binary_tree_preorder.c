#include "binary_trees.h"
/**
 * binary_tree_preorder - The function will go through binary tree
 * using a preorder traversal.
 * @tree: The tree is a pointer to the root node
 * @func: Is the function to call each node.
 * Return: just nothing at all
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
