#include "binary_trees.h"

/**
 * depth - finds the depth of a tree
 * @tree: root node
 *
 * Return: depth of tree
 */

size_t depth(const binary_tree_t *tree)
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

/**
 * compare - comparator function that iteratively check if
 * two nodes converge to the same ancestor.
 * @first: first node
 * @second: second node
 *
 * Return: pointer to the common parent
 */

binary_tree_t *compare(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *parents, *p_second;

	if (first == second)
	{
		if (first->parent->right == second)
			return (first->parent->right);
		else
			return (first->parent->left);
	}

	if (second->parent->left == second)
		p_second = second->parent->left;
	else
		p_second = second->parent->right;

	while (p_second)
	{
		parents = first->parent;
		while (parents)
		{
			if (parents == p_second)
				return (parents);

			if (parents == p_second->parent)
				return (parents);

			parents = parents->parent;
		}
		p_second = p_second->parent;
	}

	return (NULL);
}

/**
 * binary_trees_ancestor - finds the closest common ancestor
 * between two nodes
 * @first: ...
 * @second: ...
 *
 * Return: common ancestor.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *ancestor;

	if (!first || !second)
		return (NULL);

	if (depth(first) > depth(second))
		ancestor = compare(first, second);
	else
		ancestor = compare(second, first);

	return (ancestor);
}
