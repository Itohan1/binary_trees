#include "binary_trees.h"

/**
 * binary_tree_sibling - checks if the node has a sibling
 * @node: node perimeter
 * Return: node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	parent = malloc(sizeof(binary_tree_t));

	if (node == NULL || parent == NULL)
	{
		return (NULL);
	}

	if (node->parent == NULL)
	{
		return (0);
	}

	if (node->parent->left != NULL && node->parent->left != node)
	{
		return (node->parent->left);
	}

	if (node->parent->right != NULL || node->parent->right != node)
	{
		return (node->parent->right);
	}

	return (node);
}
