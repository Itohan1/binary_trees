#include "binary_trees.h"

/**
 * binary_tree_balance - checks binary tree is balanced
 * @tree: tree root perimeter
 * Return: left_height
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	else
	{
		left_height = binary_tree_balance(tree->left);
		right_height = binary_tree_balance(tree->right);
		return (left_height > right_height ? left_height : right_height);
	}
}
