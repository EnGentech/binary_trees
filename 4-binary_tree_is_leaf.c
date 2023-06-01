#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Point to the node for checking
 * Return: return 1 if the node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
return 0;

return (node->left == NULL && node->right == NULL);
}