#include "binary_trees.h"
/**
 * binary_tree_uncle - This function will find the uncle
 * of a node.
 * @node: It si the pointer to the node to find the uncle.
 * Return: if node is NULL, return NULL.
 * if node has no uncle, return NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
