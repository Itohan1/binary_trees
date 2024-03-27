#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: parameter representing the root of the tree
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	if (tree->left != NULL)
	{
		tree->left = NULL;
	}
	else if (tree->right != NULL)
	{
		tree->right = NULL;
	}
	else
	{
		tree = NULL;
	}
	free(tree);
}
