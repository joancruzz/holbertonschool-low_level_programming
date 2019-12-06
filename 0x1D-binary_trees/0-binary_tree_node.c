#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to parent node
 * @value: value of node
 * Return: binary tree
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = calloc(1, sizeof(binary_tree_t));

    if (new_node == NULL)
        return(NULL);
    new_node->parent = parent;
    new_node->n = value;
    return(new_node);
}