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
/**
 * binary_tree_is_perfect- Function that checks if a binary tree
 * is perfect
 * @tree: is a pointer to the root node
 * Return: 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_node = 0, r_node = 0;

	if (!tree)
		return (0);

	l_node = binary_tree_height(tree->left);
	r_node = binary_tree_height(tree->right);

	if (l_node != r_node)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	if ((tree->left != NULL) && (tree->right != NULL))
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	else
		return (0);
}
