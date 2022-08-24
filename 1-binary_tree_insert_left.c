#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
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
	
	new_node = binary_tree_node(parent, value);
	new_node->left = parent->left;
	
	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}

/**
 * binary_tree_insert_left2 - Inserts a node as the left-child of another node
 * 
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to put in the new node
 * Return: Pointer to the new node otherwise NULL
 */
binary_tree_t *binary_tree_insert_left2(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	
	if (parent == NULL)
		return (NULL);
	
	new_node = binary_tree_node(parent, value);
	
	if (parent->left != NULL)
	{
		binary_tree_insert_left(new_node, parent->left->n);
	}
	parent->left = new_node;

	return (new_node);
}