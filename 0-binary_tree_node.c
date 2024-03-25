#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_node -creates new node
 * @parent: perimetal for parent
 * @value: perimeter for value
 * Return: curr
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *curr = malloc(sizeof(binary_tree_t));

	if (curr == NULL)
	{
		return (NULL);
	}

	curr->n = value;
	curr->parent = parent;
	curr->left = NULL;
	curr->right = NULL;

	return (curr);
}
