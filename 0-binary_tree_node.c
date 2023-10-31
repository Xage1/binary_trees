#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_node - Creates a new binary tree node.
* @parent: A pointer to the parent node of the node to create.
* @value: The value to store in the new node.
*
* This function creates a new binary tree node with the specified value
* and initializes its child pointers (left and right) to NULL. The parent
* pointer is set to the provided parent node, or NULL if there is no parent.
*
* Return: A pointer to the newly created binary tree node on success,
*         or NULL on failure (e.g., due to memory allocation issues).
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = value;
new_node->left = NULL;
new_node->right = NULL;
new_node->parent = parent;

return (new_node);
}
