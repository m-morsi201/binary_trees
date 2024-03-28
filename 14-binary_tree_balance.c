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
 * binary_tree_height - function that measures
 *			the height factor of a binary tree.
 * @tree: Is a pointer to the root node of the tree
 *		to measure the height of a binary tree.
 * Return: the height of the tree,
 *		If tree is NULL, return 0.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;/* l for left, r for right */

	if (tree == NULL)
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if (l >= r)
		return (1 + l);
	return (1 + r);
}


/**
 * binary_tree_balance - function that measures
 *			the balance factor of a binary tree.
 * @tree: Is a pointer to the root node of the tree to
 *		measure the balance factor.
 * Return: the balance factor of the tree,
 *		If tree is NULL return 0.
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r; /* l for left, r for right */

	if (tree == NULL)
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	return (l - r);
}
