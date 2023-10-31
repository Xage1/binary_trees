#include "binary_trees.h"

/**
* binary_tree_inorder - Traverse a binary tree using in-order traversal
* @tree: A pointer to the root node of the binary tree to traverse.
* @func: A pointer to a function that takes an integer as a parameter.
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}
binary_tree_inorder(tree->left, func);

func(tree->n);

binary_tree_inorder(tree->right, func);
}
