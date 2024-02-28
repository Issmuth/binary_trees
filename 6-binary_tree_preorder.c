#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses tree in preorder
 * @tree: root node of the tree
 * @func: function to be called on each node of traversal
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
