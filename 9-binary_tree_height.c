#include "binary_trees.h"

/**
 * binary_tree_height - inspect the height of tree
 * @tree: Pointer to the root
 * Return: return the height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
return (0);

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

return (left_height > right_height ? left_height + 1 : right_height + 1);
}
