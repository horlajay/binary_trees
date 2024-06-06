#include "binary_trees.h"

/**
 * binary_tree_uncle - Retrieves the uncle of a given node
 *                     within a binary tree.
 * @node: A pointer to the node whose uncle is to be found.
 *
 * Return: NULL if the node is NULL, does not have an uncle,
 *         or the parent's parent is NULL. Otherwise, returns
 *         a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
