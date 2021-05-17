#include "binary_trees.h"

/**
* max - defines the max between two elements
*@left: left side of the tree
*@right: right side of the tree
*Return: size
*/
size_t max(size_t left, size_t right)
{
	if (left > right)
		return (left);
	else
		return (right);
}
/**
*binary_tree_height - give the height of a binary tree
*@tree: tree to go through
*
* Return: height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t tleft, tright;

	if (!tree)
		return (0);

	tleft = binary_tree_height(tree->left);
	tright = binary_tree_height(tree->right);

	if (tree->left || tree->right)
		return (max(tleft, tright) + 1);
	return (0);
}
