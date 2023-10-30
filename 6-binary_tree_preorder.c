#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse a binary tree using pre-order traversal and apply a function to each node.
  * @tree: A pointer to the root node of the binary tree to traverse.
   * @func: A pointer to a function that takes an integer as a parameter.
    */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}
func(tree->n);

binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);

}
