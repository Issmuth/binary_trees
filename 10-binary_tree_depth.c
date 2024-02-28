#include "binary_trees.h"

/**
 * binary_tree_depth - finds the depth of a tree
 * @tree: root node
 *
 * Return: depth of tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *parents;
	size_t count = 0;

	if (!tree)
		return (0);

	parents = tree->parent;
	while (parents)
	{
		parents = parents->parent;
		count++;
	}
	return (count);
}
