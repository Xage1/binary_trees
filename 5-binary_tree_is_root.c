#include "binary_trees.h"

/**
* binary_tree_is_root - Checks if a node is a root in a binary tree.
* @node: A pointer to the node you want to check for being a root.
*
* Return: 1 if the provided node is a root, 0 if it is not or if the node is NULL.
*/

int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
{
return 0;
}

return (node->parent == NULL);
}
