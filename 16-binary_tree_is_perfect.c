#include "binary_trees.h"
int tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (!tree)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}
int perfect(const binary_tree_t *tree, int depth, int level)
{
	if (!tree)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (depth == level);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	else
		return (perfect(tree->left, depth, level + 1) &&
			perfect(tree->right, depth, level + 1));
}
/**
 * binary_tree_is_perfect - checks binary tree is perfect
 * @tree: a pointer to root node
 *
 * Return: 1 if the tree is perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;
	int level = 0;

	depth = tree_depth(tree);
	return (perfect(tree, depth, level));
}
