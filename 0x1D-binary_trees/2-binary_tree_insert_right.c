#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to parent node
 * @value: value of node
 * Return: binary tree
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

binary_tree_t *r_node = NULL;
if (parent == NULL)
return (NULL);

r_node = calloc(1, sizeof(binary_tree_t));

if (r_node == NULL)
return (NULL);

r_node->n = value;
r_node->parent = parent;

if (parent->right)
{
r_node->right = parent->right;
r_node->right->parent = r_node;
}
parent->right = r_node;
return (r_node);
}
