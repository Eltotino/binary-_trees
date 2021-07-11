#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of node
 * @node: pointer to node
 *
 * Return: pointer to uncle node, or Null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *papy;

	if (!node)
		return (NULL);
	papy = node->parent->parent;
	if (node->parent && papy && papy->left == node->parent)
		return (papy->right);
	else if (node->parent && papy && papy->right == node->parent)
		return (papy->left);
	return (NULL);
}
