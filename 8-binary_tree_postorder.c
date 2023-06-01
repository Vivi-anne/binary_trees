#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses binary tree using post-order traversal
 * @tree: a pointer to root node of the tree to traverse
 * @func: a pointer to function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
