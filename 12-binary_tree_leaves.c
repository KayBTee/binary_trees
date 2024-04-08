#include "binary_trees.h"
/**
 *binary_tree_leaves - counts the leaves in the binary tree
 *
 *@tree: points to first node in the tree
 *
 *Return: The number of leaves in the binary tree
 *
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{

	size_t right_leaf_count, left_leaf_count, total_leaf_count;

	if (tree == NULL)
		return (0);

	if (!(tree->right || tree->left))
	{

		return (1);
	}

	right_leaf_count = binary_tree_leaves(tree->right);
	left_leaf_count = binary_tree_leaves(tree->left);

	total_leaf_count = right_leaf_count + left_leaf_count;

	return (total_leaf_count);
}
