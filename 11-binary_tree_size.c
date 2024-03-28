#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree.
 * @tree: Is a pointer to the root node of the tree to measure the size.
 * Return: size of a binary tree, If tree is NULL, the function must return 0.
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l, r;/*l for left, r for right*/

	if (tree == NULL)
		return (0);
	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);
	return (1 + l + r);
}
