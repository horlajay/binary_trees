#include "binary_trees.h"

/**
 * binary_tree_sibling - Retrieves the sibling of a
 *                       given node in a binary tree.
 * @node: A pointer to the node whose sibling is to be found.
 *
 * Return: If the node is NULL or does not have a sibling, returns NULL.
 *         Otherwise, returns a pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
