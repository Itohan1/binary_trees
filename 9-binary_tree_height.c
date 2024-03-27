#include "binary_trees.h"

/**
 * binary_tree_height - checks the height of the tree
 * @tree: tree perimeter
 * Return: left_height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{	
	ssize_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (-1);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (1 + (left_height > right_height ? left_height : right_height));
}
