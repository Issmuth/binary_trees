#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses tree in postorder
 * @tree: root node of the tree
 * @func: function to be called on each node of traversal
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
