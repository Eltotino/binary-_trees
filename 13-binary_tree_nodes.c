#include "binary_trees.h"

/**
*binary_tree_nodes - give the number of nodes with at least one child
*@tree: tree to go through
*
* Return: number of childs
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
		return (binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right) + 1);
	return (0);
}
