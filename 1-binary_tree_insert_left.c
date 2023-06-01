#include "binary_trees.h"
/**
* binary_tree_insert_left - insert node to Null nodes
* @parent: points to the left child
* @value: defined value to be stored
* Return: return a pointer to null
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
if (parent == NULL)
return (NULL);
binary_tree_t *new_node = binary_tree_node(parent, value);
if (new_node == NULL)
return (NULL);
if (parent->left != NULL)
{
new_node->left = parent->left;
parent->left->parent = new_node;
}
parent->left = new_node;
return (new_node);
}
