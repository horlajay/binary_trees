#include "binary_trees.h"


unsigned char is_leaf(const binary_tree_t *node);
size_t depth(const binary_tree_t *tree);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level);
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * is_leaf - Checks if a given node is a leaf in a binary tree.
 * @node: Pointer to the node to be checked.
 *
 * Return: 1 if the node is a leaf, otherwise 0.
 */
unsigned char is_leaf(const binary_tree_t *node)
{


	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * depth - Calculates the depth of a specified
 *         node within a binary tree.
 * @tree: Pointer to the node whose depth is to be determined.
 *
 * Return: The depth of the node.
 */
size_t depth(const binary_tree_t *tree)
{

	return (tree && tree->parent ? 1 + depth(tree->parent) : 0);
}

/**
 * get_leaf - Finds a leaf node in a binary tree.
 * @tree: Pointer to the root node of the tree where the search will begin.
 *
 * Return: Pointer to the first leaf node encountered.
 */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{

	if (!tree)
		return (NULL);
	if (!tree->left && !tree->right)
		return (tree);
	return (get_leaf(tree->left ? tree->left : tree->right));
}

/**
 * is_perfect_recursive - Recursively checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to be checked.
 * @leaf_depth: The depth of a leaf in the binary tree.
 * @level: The level of the current node.
 *
 * Return: 1 if the tree is perfect, otherwise 0.
 */
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level)
{

	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (!tree->left || !tree->right)
		return (0);
	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
		is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to be checked.
 *
 * Return: 0 if the tree is NULL or not perfect, otherwise 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}
