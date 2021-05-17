#include "binary_trees.h"

/**
*binary_tree_depth - give the depth of a binary tree
*@tree: tree to go through
*
* Return: height of the tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->parent)
		return (binary_tree_depth(tree->parent) + 1);
	return (0);
}
