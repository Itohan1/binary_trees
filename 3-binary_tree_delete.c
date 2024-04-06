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
		free (tree);
		return;
	}

	if (tree->left != NULL)
	{
		free(tree->left);
		tree->left = NULL;
	}
	else if (tree->right != NULL)
	{
		free(tree->left);
		tree->right = NULL;
	}
	else
	{
		tree = NULL;
	}
	free(tree);
}
