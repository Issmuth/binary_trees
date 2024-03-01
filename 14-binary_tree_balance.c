#include "binary_trees.h"


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: root node pointer
 *
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (height(tree->left) - height(tree->right));

	return (0);
}

/**
 * height - gets height of tree
 * @tree: pointer to root node
 *
 * Return: height
 */

int height(const binary_tree_t *tree)
{
	size_t left_node, right_node;

	if (tree)
	{
		left_node = 0;
		right_node = 0;

		if (tree->left)
			left_node = height(tree->left) + 1;
		else
			left_node = 1;

		if (tree->right)
			right_node = height(tree->right) + 1;
		else
			right_node = 1;

		if (right_node > left_node)
			return (right_node);

		return (left_node);
	}

	return (0);
}
