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
return NULL;

binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
return (NULL);

new_node->n = value;
new_node->parent = parent;
new_node->right = NULL;

if (parent->left != NULL)
{
new_node->left = parent->left;
parent->left->parent = new_node;
}
else
{
new_node->left = NULL;
}
parent->left = new_node;

return (new_node);
}
