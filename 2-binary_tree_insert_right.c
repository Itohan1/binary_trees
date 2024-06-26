#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @parent: parent perimeter
 * @value: value perimeter
 * Return: node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL || parent == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	if (parent->right == NULL)
	{
		parent->right = node;
	}
	else
	{
		node->right = parent->right;
		parent->right->parent = node;
		parent->right = node;
	}

	return (node);
}
