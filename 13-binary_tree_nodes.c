#include "binary_trees.h"

/**
 * binary_tree_nodes - count the number of nodes
 * that have at least 1 child.
 * @tree: pointer to root node
 *
 * Return: number of nodes with at least one child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
		if (tree->left || tree->right)
			nodes++;
	}
	return (nodes);
}
