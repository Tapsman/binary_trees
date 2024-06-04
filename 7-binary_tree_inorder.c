#include "binary_trees.h"
/**
 * binary_tree_inorder - The function will go through binary tree
 * using a inorder traversal.
 * @tree: The tree is a pointer to the root node
 * @func: Is the function to call each node.
 * Return: just nothing at all.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
