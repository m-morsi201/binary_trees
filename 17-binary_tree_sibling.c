#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node.
 * @node: Is a pointer to the node to find the sibling.
 * Return:  a pointer to the sibling node,
 *		If node is NULL or the parent is NULL, return NULL.
 *		If node has no sibling, return NULL.
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
