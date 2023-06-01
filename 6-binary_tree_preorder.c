#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse a binary tree
 * @tree: Pointes to the root node of the tree
 * @func: Pointer to the function to call for each node
 *
 * Return: None
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
func(tree->n);  // Call the function for the current node
binary_tree_preorder(tree->left, func);  // Traverse the left subtree
binary_tree_preorder(tree->right, func);  // Traverse the right subtree
}
