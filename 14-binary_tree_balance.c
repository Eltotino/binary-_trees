#include "binary_trees.h"

/**
 * max - returns the maximum of two integers
 * @first: the first integer
 * @second: the second integer
 *
 * Return: the maximum between the two integer
 */
size_t max(size_t first, size_t second)
{
	if (first > second)
		return (first);
	else
		return (second);
}
/**
 * height - measures the hieght of binary tree
 * @tree: a pointer to the root node
 *
 * Return: the eight of the tree, 0 otherwise
 */
size_t height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		return (max(height(tree->left),
				height(tree->right)) + 1);
	return (0);
}

/**
 * binary_tree_balance - measures the balance factor of binary tree
 * @tree: a pointer to the root node
 *
 * Return: the balance factor, O otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);

	if (tree->left)
		left_height = (height(tree->left));
	else
		left_height = (-1);

	if (tree->right)
		right_height = (height(tree->right));
	else
		right_height = (-1);

	return (left_height - right_height);
}
