#include "binary_trees.h"
/**
* binary_tree_insert_left - insert node to Null nodes
* @parent: points to the left child
* @value: defined value to be stored
* Return: return a pointer to null
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ins_left;
	ins_left = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (parent == NULL || ins_left == NULL)
		return (NULL);
	ins_left->parent = NULL;
	ins_left->left = NULL;
	ins_left->right = NULL;
	ins_left->n = value;
	if (parent->left != NULL)
	{
		ins_left->left = parent->left;
		ins_left->left->parent = ins_left;
	}
	ins_left->parent = parent;
	parent->left = ins_left;
	return (ins_left);
}
