#include "binary_trees.h"
/**
 *binary_tree_height - used to create a binary tree node
 *
 *@tree: points to parent node to be created
 *
 *Return: the pointer to the new node and a null if failed
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t right_depth = 0;
	size_t left_depth = 0;


	if (tree == NULL)
		return (0);

	if (tree->right)
		right_depth = 1 + binary_tree_height(tree->right);

	if (tree->left)
		left_depth = 1 + binary_tree_height(tree->left);

	if (right_depth > left_depth)
	{
		return (right_depth);
	}
	else
	{
		return (left_depth);
	}
}
