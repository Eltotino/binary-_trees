#include "binary_trees.h"

/**
*binary_tree_insert_left - insert a left child in a tree
*@parent: parent node
*@value: value in the node
* Return: new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->left = parent->left;

	if (parent->left != NULL)
	{
		parent->left->parent = new;
	}

	new->parent = parent;
	parent->left = new;
	new->right = NULL;
	new->n = value;

	return (new);
}
