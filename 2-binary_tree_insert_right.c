#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as a right child of a parent tree
 * @parent: parent node
 * @value: value of the node
 *
 * Return: pointer to the created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	old = parent->right;
	if (old)
		old->parent = new_node;
	new_node->right = old;
	parent->right = new_node;

	return (new_node);
}
