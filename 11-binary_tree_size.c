#include "binary_trees.h"
/**
* binary_tree_size - determining the dept of a tree
* @tree: points to the node
*
* Return: return the depth
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
unsigned int n_right = 0, n_left = 0, root = 1;

if (!tree)
return (0);
if (tree->left)
n_left = binary_tree_size(tree->left);
if (tree->right)
n_right = binary_tree_size(tree->right);
return (n_right + n_left + root);
}
