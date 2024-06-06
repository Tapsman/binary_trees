#include "binary_trees.h"
/**
 * binary_tree_sibling - This is a function that will find a sibling of a node.
 * @node: The node is a pointer to discovering the
 * sibling node.
 * Return: if node is NULL, or parent is NULL, return NULL.
 * if node has no sibling, return NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
