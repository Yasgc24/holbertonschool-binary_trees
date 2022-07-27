#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (parent == NULL && new == NULL)
	{
		return (NULL);
	}

	new->left = NULL;
	new->right = NULL;
	new->n = value;
	new->parent = parent;

	if (parent->right != NULL)
	{
		new->right = parent->right;
		new->right->parent = new;
	}
	parent->right = new;
	return (new);
}
