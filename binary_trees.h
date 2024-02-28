#ifndef BINARY_TREES
#define BINARY_TREES

#include <stdio.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

/**
 * binary_tree_t - type def for binary tree
 */
typedef struct binary_tree_s binary_tree_t;

/**
 * bst_t - typedef for binary search tree
 */
typedef struct binary_tree_s bst_t;

/**
 * avl_t - typedef for AVL tree
 */
typedef struct binary_tree_s avl_t;

/**
 * heap_t - heap tree typedef
 */
typedef struct binary_tree_s heap_t;

/************** TREE UTILITY FUNCTIONS ***********************/
void binary_tree_print(const binary_tree_t *tree);

/*************** TASK FUNCTIONS *********************/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);

#endif
