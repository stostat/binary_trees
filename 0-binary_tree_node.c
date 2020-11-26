#include "binary_trees.h"


/**
 * binary_tree_node - creates a new node from root given address
 *
 * @parent: Pointer to the node
 *
 * @value: int to insert  into the node
 *
 * Return: Pointer ro node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (!temp)
		return (NULL);

	parent = temp;
	parent->n = value;
	parent->left = NULL;
	parent->right = NULL;

	return (parent);

}
