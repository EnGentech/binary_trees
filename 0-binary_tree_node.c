#include "binary_trees.h"

/**
* binary_tree_node - entry point to creating binary tree
* @parent: the root tree
* @value: values to be stored
* Return: return a pointer to nodes newly created
*/


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
{
return (NULL);
}

new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;

return (new_node);
}
