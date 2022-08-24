#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the size of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the depth
 *
 * Return: If tree is NULL return 0 otherwise size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
