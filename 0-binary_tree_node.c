#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: a pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*declaration of new node*/
	binary_tree_t *new;

	/*allocate memory space for the node*/
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	/*assign values to properties of the node*/
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	/*return pointer to the node*/
	return (new);
}
