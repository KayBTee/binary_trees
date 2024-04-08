#include "binary_trees.h"
/**
 *binary_tree_size - used to create a binary tree node
 *
 *@tree: points to parent node of the new node
 *
 *Return: The pointer to the new node
 */
size_t binary_tree_size(const binary_tree_t *tree)
{

	size_t right_depth = 0;
	size_t left_depth = 0;
	size_t total_depth;

	if (tree == NULL)
		return (0);
	if (tree->right)
	{
		right_depth = binary_tree_size(tree->right);
	}

	if (tree->left)
	{
		left_depth = binary_tree_size(tree->left);
	}

	total_depth = right_depth + left_depth + 1;

	return (total_depth);
}
