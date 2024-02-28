#include "binary_trees.h"

/**
 * binary_tree_sibling - returns the sibling of a node
 * @node: node to find the sibling of
 *
 * Return: pointer to node's sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);

	if (node->parent->left != node)
		return (node->parent->left);

	if (node->parent->right != node)
		return (node->parent->right);

	return (NULL);
}
