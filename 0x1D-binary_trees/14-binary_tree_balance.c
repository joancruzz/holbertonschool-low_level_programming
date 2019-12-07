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
 * @tree: pointer to the root node of
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
/**
 * binary_tree_balance - function that measures the
 * balance factor of a binary tree
 * @tree: pointer to the root node of the tree to
 * measure the balance factor
 * Return: balance factors of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int l_node = 0, r_node = 0, balance = 0;

if (!tree)
return (0);

l_node = binary_tree_height(tree->left);
r_node = binary_tree_height(tree->right);

if (!tree->left)
l_node--;

if (!tree->right)
r_node--;
balance = l_node - r_node;
return (balance);
}
