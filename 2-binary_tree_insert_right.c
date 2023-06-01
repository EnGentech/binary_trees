#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Inserts a node as the right-child 
 * @parent: Pointer to the node to insert the right-child
 * @value: The value to store in the new node
 *
 * Return: A pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    if (parent == NULL)
        return NULL;

    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;

    if (parent->right != NULL)
    {
        new_node->right = parent->right;
        parent->right->parent = new_node;
    }
    else
    {
        new_node->right = NULL;
    }

    parent->right = new_node;

    return new_node;
}
