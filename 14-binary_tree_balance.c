#include "binary_trees.h"

/**
 * binary_tree_balance - Calculates the balance factor of a binary tree.
 * @tree: A pointer to node of tree to calculate the balance factor.
 *
 * Return: If tree is NULL, returns 0. Otherwise, return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
