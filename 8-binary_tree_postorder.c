#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse a binary tree using post-order traversal and apply a function to each node.
  * @tree: A pointer to the root node of the binary tree to traverse.
   * @func: A pointer to a function that takes an integer as a parameter.
    */
    void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int)) {
        if (tree == NULL || func == NULL) {
                return; // Do nothing if tree or func is NULL
                    }

                        binary_tree_postorder(tree->left, func);

                            binary_tree_postorder(tree->right, func);

                                func(tree->n);
                                }
