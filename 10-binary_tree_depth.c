#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the size of a binary tree.
 * @node: is a pointer to the root node of the tree to measure the size.
 * Return: depth of a node in a binary tree
 *		If node is NULL, return 0.
*/

size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t i = 0;

	if (node == NULL)
		return (0);
	while (node->parent != NULL)
	{
		i++;
		node = node->parent;
	}
	return (i);
}
