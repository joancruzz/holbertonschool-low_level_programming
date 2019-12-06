#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to parent node
 * @value: value of node
 * Return: binary tree
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

binary_tree_t *l_node = NULL;
if (parent == NULL)
return (NULL);

l_node = calloc(1, sizeof(binary_tree_t));

if (l_node == NULL)
return (NULL);

l_node->n = value;
l_node->parent = parent;

if (parent->left)
{
l_node->left = parent->left;
l_node->left->parent = l_node;
}
parent->left = l_node;
return (l_node);
}
