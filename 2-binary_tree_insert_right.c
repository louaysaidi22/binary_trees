#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: is a pointer to the parent node of the node to create.
 * @value: is the value to put in the new node.
 * Return: return a pointer to the created node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *right_node;


	if (parent == NULL)
		return (NULL);

	right_node = malloc(sizeof(binary_tree_t));

	if (right_node == NULL)
		return (NULL);
	right_node->parent = parent;
	right_node->n = value;
	right_node->left = NULL;
	right_node->right = NULL;

	if (parent->right == NULL)
		parent->right = right_node;
	else
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
		parent->right = right_node;
	}
	return (right_node);

}
