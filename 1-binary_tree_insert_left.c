#include "binary_trees.h"
/**
* binary_tree_insert_left - insert node to Null nodes
* @parent: points to the left child
* @value: defined value to be stored
* Return: return a pointer to null
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *insert;

	insert = (binary_tree_t *) malloc(sizeof(binary_tree_t) + 1);
	if (parent == NULL || insert == NULL)
		return (NULL);

	insert->parent = parent;
	insert->left = NULL;
	insert->right = NULL;
	insert->n = value;

	if (parent->left != NULL)
	{
		insert->left = parent->left;
		insert->left->parent = insert;
	}
	parent->left = insert;
	return (insert);
}
