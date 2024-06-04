#include "binary_trees.h"
/**
 * binary_tree_is_root - The function will check if the given
 * node is a root.
 * @node: Is the the node that will be checked.
 * Return: 0 if its not root, 1 if its a root.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent != NULL)
		return (0);
	return (1);
}
