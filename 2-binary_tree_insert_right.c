#include "binary_trees.h"

/**
*binary_tree_insert_right - insert a left child in a tree
*@parent: parent node
*@value: value in the node
* Return: new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->right = parent->right;

	if (parent->right != NULL)
	{
		parent->right->parent = new;
	}

	new->parent = parent;
	parent->right = new;
	new->left = NULL;
	new->n = value;

	return (new);
}
