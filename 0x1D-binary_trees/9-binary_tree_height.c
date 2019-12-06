#include "binary_trees.h"
/**
 * find_bt_height - function that measures
 * the height of a node
 * @tree:  pointer to the root node
 * Return: size
 */
size_t find_bt_height(const binary_tree_t *tree)
{
size_t left, right;

if (!tree)
return (0);

left = find_bt_height(tree->left);
right = find_bt_height(tree->right);

if (left > right)
return (left + 1);
else
return (right + 1);
}


/**
 * binary_tree_height - function that measures
 * the height of a binary tree
 * @tree:  pointer to the root node of
 * the tree to measure the height
 * Return: heighth of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t result;

if (!tree)
return (0);

result = find_bt_height(tree) - 1;
return (result);
}
