#include "binary_trees.h"

/**
* binary_tree_insert_left - Inserts a node as the left-child of another node.
* @parent: A pointer to the node to insert the left-child in.
* @value: The value to store in the new node.
* Return: A pointer to the created binary tree node on success,
*         or NULL on failure (e.g., memory allocation issues) or if `parent` is NULL.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (parent == NULL)
{
return (NULL);
}
new_node = binary_tree_node(parent, value);
if (new_node == NULL)
{
return  (NULL);
}
new_node->left = parent->left;

if (new_node->left != NULL)
{
new_node->left->parent = new_node;
}
parent->left = new_node;

return (new_node);
}
