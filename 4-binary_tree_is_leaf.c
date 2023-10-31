#include "binary_trees.h"

/**
* binary_tree_is_leaf - Checks if a node is a leaf in a binary tree.
* @node: A pointer to the node to check.
* Return: 1 if the provided node is a leaf, 0 if it is not or if the node is NULL.
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}

return (node->left == NULL && node->right == NULL);
}
