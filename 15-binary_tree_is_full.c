#include "binary_trees.h"
/**
 *binary_tree_is_full - Check if a given binary tree is full
 *
 *@tree: points to root of tree
 *
 *Return: 0 if tree not full and 1 if full
 *
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	int tree_is_full = 1;

	if (tree == NULL)
		return (0);

	if ((tree->right && tree->left) || (!tree->right && !tree->left))
	{

		tree_is_full *= 1;
	}
	else
	{

		tree_is_full *= 0;
	}

	if (tree->right)
		tree_is_full *= binary_tree_is_full(tree->right);

	if (tree->left)
		tree_is_full *= binary_tree_is_full(tree->left);

	return (tree_is_full);
}
