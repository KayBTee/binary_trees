#include "binary_trees.h"
size_t calculate_tree_depth(const binary_tree_t *tree);

/**
 *binary_tree_balance - Measures the balance factor of a binary tree
 *
 *@tree: points to root node of the tree to be measured
 *
 *Return: Balance factor of tree
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right_subtree_depth, left_subtree_depth, tree_balance;

	if (tree == NULL)
		return (0);

	right_subtree_depth = calculate_tree_depth(tree->right);
	left_subtree_depth = calculate_tree_depth(tree->left);
	tree_balance = left_subtree_depth - right_subtree_depth;

	return (tree_balance);
}

/**
 *calculate_tree_depth - measures depth of a binary tree
 *
 *@tree: points to root of the tree to be measured
 *
 *
 *Return: Depth of the tree
 */

size_t calculate_tree_depth(const binary_tree_t *tree)
{

	size_t right_counter, left_counter;

	if (tree == NULL)
		return (0);

	right_counter = calculate_tree_depth(tree->right);
	left_counter = calculate_tree_depth(tree->left);

	if (right_counter > left_counter)
	{
		return (right_counter + 1);
	}
	return (left_counter + 1);

}
