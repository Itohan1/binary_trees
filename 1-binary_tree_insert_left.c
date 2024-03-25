#include "binary_trees.h"

/*
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		return(NULL);
	}

	node->n = value;
	node->parent = parent;
	parent->left = node;
	node->left = NULL;
	node->right = NULL;

	return (node);
}