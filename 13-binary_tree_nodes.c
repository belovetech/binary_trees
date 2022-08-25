#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: If tree is NULL return 0 otherwise counter
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);

	if (tree && (tree->left || tree->right))
	{
		counter++;
		counter += binary_tree_nodes(tree->left);
		counter += binary_tree_nodes(tree->right);
	}
	return (counter);
}
