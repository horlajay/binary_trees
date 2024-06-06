#include "binary_trees.h"

/**
 * binary_tree_size - Calculates the total number of nodes in a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: If tree is NULL, return 0, otherwise, the number of nodes.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
