#include "binary_trees.h"
/**
 * binary_tree_insert_right - A function to insert a node as the
 * right child of another node
 * if already a parent has a right child, the new node
 * must take its place
 * @parent: Pointer to the node to insert left child in
 * @value: The value the new node will be stored in
 * Return: NULL on failure or new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
