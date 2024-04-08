#include "binary_trees.h"
/**
 *binary_tree_depth - Used in the creation of a binary tree node
 *
 *@tree: points to parent node to be created
 *
 *Return: pointer to the new node
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{

	size_t depth_counter = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
	{
		depth_counter = 1 + binary_tree_depth(tree->parent);
	}

	return (depth_counter);
}
