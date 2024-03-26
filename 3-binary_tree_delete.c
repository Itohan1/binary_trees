#include "binary_trees.h"

/*
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
