#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf.
 * @node: Is a pointer to the node to check.
 * Return: 1 If the node is a leaf, Otherwise - 0.
 *
 * If node is NULL, return 0.
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
