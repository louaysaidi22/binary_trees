#include "binary_trees.h"
/**
 * binary_tree_balance_left - count left child
 * @tree: a pointer to the root node of the tree
 * Return: number of left child
 */
int binary_tree_balance_left(const binary_tree_t *tree)
{
	int left = 0;

	if (tree->left != NULL)
		left += binary_tree_balance_left(tree->left);
	return (left + 1);
}
/**
 * binary_tree_balance_right - count right child
 * @tree: a pointer to the root node of the tree
 * Return: number of right child
 */
int binary_tree_balance_right(const binary_tree_t *tree)
{
	int right = 0;

	if (tree->right != NULL)
		right += binary_tree_balance_right(tree->right);
	return (right + 1);
}
/**
 * binary_tree_balance - a function that measures
 * the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: the balance
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);
	return (binary_tree_balance_left(tree) - binary_tree_balance_right(tree));
}
