#include "binary_trees.h"

/**
 * binary_tree_inorder - Performs in-order traversal on a binary tree.
 * @tree: Pointer to the root node of the tree to be traversed.
 * @func: Function pointer to be called for each node's value.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
