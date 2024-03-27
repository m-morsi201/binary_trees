#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node
 *		as the left-child of another node.
 *
 * @parent: is A pointer to the node to insert the left-child in.
 * @value: is The value to store in the new node.
 * Return: A pointer to the created node
 *		or NULL on failure or if parent is NULL.
 * Description: If parent already has a left-child,
 *		the new node takes its place and the old left-child is set as
 *              the left-child of the new node.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}

	parent->left = new;

	return (new);
}
