#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: node to check if its a leaf
 * Return: 1 if true, or 0 if false.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
if (!node)
return (0);

return (!node->left && !node->right);
}
