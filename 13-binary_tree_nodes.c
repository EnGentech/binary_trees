#include "binary_trees.h"
/**
 * binary_tree_depth - count nodes with at least 1 child
 * @tree: points to the top
 * Return: number of nodes with at least a child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count = 0;

if (!tree)
return (0);

if (tree->left || tree->right)
count += 1;

count += binary_tree_nodes(tree->left);
count += binary_tree_nodes(tree->right);
return (nodes);
}
