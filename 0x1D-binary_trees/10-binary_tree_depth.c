#include "binary_trees.h"
/**
 * binary_tree_depth -  function that measures the
 * depth of a node in a binary tree
 * @tree: tree is a pointer to the node to measure the depth
 * Return: depth of binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t bt_depth = 0;

if (!tree)
return (0);

while (tree->parent)
{
bt_depth++;
tree = tree->parent;
}
return (bt_depth);
}
