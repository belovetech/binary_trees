#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL return 0 otherwise Height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree)
	{
		left  = tree->left ? binary_tree_height(tree->left) + 1 : 0;
		right = tree->right ? binary_tree_height(tree->right) + 1 : 0;
		return ((left > right) ? left : right);
	}

	return (0);
}
