#include "binary_trees.h"

/**
 * is_leaf - function to checks if a node is a leaf or not.
 * @node: Is a pointer to the root node of the tree
 *		to count the number of nodes.
 * Return: 1 if node is a leaf, otherwise 0.
 *		If node is NULL, return 0.
*/

int is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_is_full - function that checks
 *			if a binary tree is full.
 * @tree: Is a pointer to the root node of the tree to check.
 * Return: If tree is NULL, your function must return 0.
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r; /* l for left, r for right */

	if (tree == NULL)
		return (0);

	if (is_leaf(tree))
		return (1);

	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);

	if (l == 0 || r == 0)
		return (0);

	return (1);
}
