#include "binary_trees.h"
/**
 * binary_tree_depth - lets check the depth
 * tree: points to the root of the tree
 * Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
if (tree == NULL || tree->parent == NULL)
return (0);
return (1 + binary_tree_depth(tree->parent));
}
