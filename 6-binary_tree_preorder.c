nclude "binary_trees.h"
/**
 * binary_tree_preorder - Traverses a binary tree using pre_order traversal.
 * @tree: A pointer to the root node of the ree to traverse.
 * @func: A pointer to a function to call for each node's value.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
