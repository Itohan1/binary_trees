#include "binary_trees.h"
#include <stdio.h>

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

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * raise_to_power - gets the power
 * @base: base
 * @power: power variable
 * return: result
 */

int raise_to_power(int base, int power)
{
	int i = 0, result = 1;

	if (power == 0)
	{
		return (1);
	}

	while (i < power)
	{
		result *= base;
		i++;
	}
	return (result);
}

/**
 * binary_tree_size - checks binary tree size
 * @tree: tree perimeter
 * Return: tree->left
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
        if (tree == NULL)
        {
                return (0);
        }

        return (1 + (binary_tree_size(tree->left) + binary_tree_size(tree->right)));
}

/**
 * binary_tree_is_perfect - checks if the tree is perfect
 * @tree: tree root perimeter
 * Return: 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t result, size, final_result;

	if (tree == NULL)
	{
		return (0);
	}

	result = binary_tree_height(tree) + 1;
	size = binary_tree_size(tree);

	final_result = raise_to_power(2, result) - 1;

	if (size == final_result)
	{
		return (1);
	}
	return (0);
}
