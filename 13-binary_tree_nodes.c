#include "binary_trees.h"

/**
 * is_leaf - checks if a node is a leaf or not.
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
 * binary_tree_nodes - function that counts the nodes
 *			with at least 1 child in a binary tree.
 * @tree: Is a pointer to the root node of the tree
 *		to count the number of nodes.
 * Return: If tree is NULL, the function must return 0
 *		A NULL pointer is not a node.
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l, r;/* l for left, r for right */

	if (tree == NULL || is_leaf(tree))
		return (0);

	l = binary_tree_nodes(tree->left);
	r = binary_tree_nodes(tree->right);

	return (1 + l + r);
}
