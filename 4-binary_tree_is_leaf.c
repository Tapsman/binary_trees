#include "binary_trees.h"
/**
 * binary_tree_is_leaf - This is a function that checks if
 * a node is a leaf
 * @node: It is the node that will be checked.
 * Return: 1 if the node is a leaf, or 0 if it is not a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL)
		return (1);
	if (node->right == NULL)
		return (1);
	return (0);
}
