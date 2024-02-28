#include "binary_trees.h"

/**
 * binary_tree_height - returns the height of the tree
 * @tree: pointer to root node
 *
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_node, right_node;

	if (tree)
	{
		left_node = 0;
		right_node = 0;

		if (tree->left)
			left_node = binary_tree_height(tree->left) + 1;

		if (tree->right)
			right_node = binary_tree_height(tree->right) + 1;

		if (right_node > left_node)
			return (right_node);

		return (left_node);
	}

	return (0);
}
