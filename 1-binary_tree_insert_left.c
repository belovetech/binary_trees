#include "binary_trees.h"
/**
 * binary_tree_insert_left2 - Inserts a node as the left-child of another node
 *
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to put in the new node
 * Return: Pointer to the new node otherwise NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = parent->left;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
