#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: node to the root of the tree or subtree
 *
 * Return: size of the tree or subtree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int count = 0;

	if (tree)
	{
		count += binary_tree_size(tree->left);
		count += binary_tree_size(tree->right);
		count++;
	}
	return (count);
}
