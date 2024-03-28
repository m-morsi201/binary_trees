#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree.
 * @tree: is A pointer to the root node of the tree to count the leaves of.
 * Return: The number of leaves in the tree, If tree is NULL,
 *		the function must return 0.
 *
 * Description: A NULL pointer is not a leaf.
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lv = 0;/* lv for leaves */

	if (tree)
	{
		lv += (!tree->left && !tree->right) ? 1 : 0;
		lv += binary_tree_leaves(tree->left);
		lv += binary_tree_leaves(tree->right);
	}
	return (lv);
}
