#include "binary_trees.h"

/**
 * height - returns the height of the tree
 * @tree: pointer to root node
 *
 * Return: height of tree
 */

int height(const binary_tree_t *tree)
{
	int left_node, right_node;

	if (tree)
	{
		left_node = 0;
		right_node = 0;

		if (tree->left)
			left_node = height(tree->left) + 1;

		if (tree->right)
			right_node = height(tree->right) + 1;

		if (right_node > left_node)
			return (right_node);

		return (left_node);
	}

	return (0);
}


/**
 * level_func - perform level order operation
 * @h: height
 * @tree: ...
 * @func: function
 *
 * Return:
 */

void level_func(const binary_tree_t *tree, void(*func)(int), int h)
{
	if (!tree)
		return;

	if (h == 1)
		func(tree->n);
	else if (h > 1)
	{
		level_func(tree->left, func, h - 1);
		level_func(tree->right, func, h - 1);
	}
}

/**
 * binary_tree_levelorder - performs a function call on all
 * nodes of a tree in level order traversal
 * @tree: pointer to root node
 * @func: function to call
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h, i;

	if (!tree || !func)
		return;

	h = height(tree) + 1;

	for (i = 0; i <= h; i++)
		level_func(tree, func, i);
}
