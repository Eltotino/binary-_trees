#include <stdlib.h>
#include "binary_trees.h"

/**
 *depth- depth of node in tree.
 *
 *@tree: Pointer root node.
 *
 *Return: 0 tree is NULL.
 */

size_t depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->parent)
		return (0);

	return (depth(tree->parent) + 1);

}

/**
 *left_Uncle- left uncle of a Node.
 *
 *@Nod:Node.
 *
 *Return: Nod uncle.
 */
binary_tree_t *left_Uncle(binary_tree_t *Nod)
{
	return (Nod->parent->parent->left);
}

/**
*right_Uncle- right uncle of a Node.
*
*@Nod:Node.
*
*Return: Nod uncle.
*/
binary_tree_t *right_Uncle(binary_tree_t *Nod)
{
	return (Nod->parent->parent->right);
}
/**
 *binary_tree_uncle- Function that finds the uncle of a node.
 *
 *@node: Is a pointer to the node to find the uncle
 *
 *Return:If node is NULL or the parent is NULL, return NULL.
 *-->If node has no uncle, return NULL.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	int height = 0;
	binary_tree_t *next = NULL;

	binary_tree_t* (*Func[])(binary_tree_t *) = {left_Uncle,
						     right_Uncle};
	if (!node)
		return (NULL);
	height = depth(node);
	if (height < 2)
		return (NULL);
	next = (*Func[node->parent->parent->left == node->parent])(node);
	return (next);
}
