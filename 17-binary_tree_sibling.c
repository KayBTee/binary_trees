#include "binary_trees.h"
/**
 *binary_tree_sibling - creates a new binary tree node
 *
 *@node: points to parent of created node
 *
 *Return: pointer to new node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL)
		return (NULL);
	if (!node->parent || !node->parent->left || !node->parent->right)
	{

		return (NULL);
	}

	if (node == node->parent->left)
	{

		return (node->parent->right);
	}
	else
	{

		return (node->parent->left);
	}
}
