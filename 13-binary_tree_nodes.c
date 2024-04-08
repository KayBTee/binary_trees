#include "binary_trees.h"
/**
 *binary_tree_nodes - used to count nodes with atleast a child
 *
 *@tree: points to root node of tree for counting nodes
 *
 *Return: Number of nodes with at least a child
 *
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t depth_counter = 0;

	if (tree == NULL)
		return (0);
	if (tree->right || tree->left)
	{
		depth_counter += 1;
	}

	depth_counter += binary_tree_nodes(tree->right);
	depth_counter += binary_tree_nodes(tree->left);

	return (depth_counter);
}
