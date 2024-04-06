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

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	if (tree->left != NULL && tree->right == NULL &&
			tree->left->left == NULL && tree->left->right == NULL)
	{
		return (1);
	}

	if (tree->left == NULL && tree->right != NULL)
	{
		return (-1);
	}

	if (tree->left != NULL && tree->right != NULL)
	{
		left_height = binary_tree_balance(tree->left);
		right_height = binary_tree_balance(tree->right);
	}
	return (left_height - right_height);
}
