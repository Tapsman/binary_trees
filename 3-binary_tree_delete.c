#include "binary_trees.h"
/**
 * binary_tree_delete - This is a function that will delete the
 * entire binary tree
 * @tree: Is the pointer of the root node to free
 * Return: Always nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
	}
	free(tree);
}
