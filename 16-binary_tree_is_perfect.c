#include "binary_trees.h"

/**
 * binary_tree_height - checks the height of the tree
 * @tree: tree perimeter
 * Return: left_height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}


	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_is_perfect - checks if the tree is perfect
 * @tree: tree root perimeter
 * Return: 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_depth, right_depth;

	if (tree == NULL)
	{
		return (0);
	}

	left_depth = binary_tree_height(tree->left);
	right_depth = binary_tree_height(tree->right);

	if (left_depth == right_depth)
	{
		if (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right))
		{
			return (1);
		}
	}
	return (0);
}
