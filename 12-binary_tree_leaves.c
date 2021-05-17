#include "binary_trees.h"

/**
*binary_tree_leaves - give the number of leaves in a binary tree
*@tree: tree to go through
*
* Return: number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	return (0);
}
