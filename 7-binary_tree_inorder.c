#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses tree in inorder
 * @tree: root node of the tree
 * @func: function to be called on each node of traversal
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
