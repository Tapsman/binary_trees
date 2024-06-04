#include "binary_trees.h"
/**
 * binary_tree_depth - The function will measure the depth
 * of a node in a binary tree
 * @tree: Is the pointer to the node to weigh the depth
 * Return: 0 if root, and or number of depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
