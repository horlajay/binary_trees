#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to measure leaf count.
 *
 * Return: The total count of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{

	size_t leaves = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
			leaves++;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
