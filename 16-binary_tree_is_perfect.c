#include "binary_trees.h"

/**
 *binary_tree_height - used to create a binary tree node
 *
 *@tree: A pointer to parent node for created node
 *
 *Return: Pointer to new node
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t right_depth = 0;
	size_t left_depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->right)
	{
		right_depth = binary_tree_height(tree->right) + 1;
	}

	if (tree->left)
	{

		left_depth = binary_tree_height(tree->left) + 1;
	}

	if (right_depth > left_depth)
	{
		return (right_depth);
	}
	else
	{

		return (left_depth);
	}

}

/**
 *binary_tree_balance - used to create binary tree node
 *
 *@tree: points to parent node of node to be created
 *
 *Return: Pointer to new node
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	size_t right_depth = 0;
	size_t left_depth = 0;
	size_t depth_difference;

	if (tree == NULL)
		return (0);

	if (tree->right)
	{
		right_depth = binary_tree_height(tree->right) + 1;
	}

	if (tree->left)
	{

		left_depth = binary_tree_height(tree->left) + 1;
	}
	depth_difference = left_depth - right_depth;
	return (depth_difference);
}

/**
 *binary_tree_is_perfect - used to create a tree node
 *
 *@tree: points to parent node of created node
 *
 *Return: pointer to new node
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	int binTBal = binary_tree_balance(tree);

	if (tree == NULL)
		return (0);
	if (binTBal == 0)
	{

		if (!tree->left && !tree->right)
		{
			return (1);
		}

		return (binary_tree_is_perfect(tree->left)
				&& binary_tree_is_perfect(tree->right));
	}
	return (0);

}
