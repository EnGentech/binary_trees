#include "binary_trees.h"
/**
 * binary_tree_depth - count nodes with at least 1 child
 * @tree: points to the top
 * Return: number of nodes with at least a child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)  // Leaf node
return (0);

size_t left_nodes = binary_tree_nodes(tree->left);
size_t right_nodes = binary_tree_nodes(tree->right);
return 1 + left_nodes + right_nodes;
}
