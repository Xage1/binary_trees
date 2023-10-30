#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
  * @tree: A pointer to the root node of the tree to delete.
   *
    * This function deletes the entire binary tree rooted at the provided 'tree' by
     * freeing the memory associated with all nodes, ensuring there are no memory leaks.
      *
       * If 'tree' is NULL, indicating that the tree is already empty or doesn't exist, the
        * function does nothing.
         */

void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
{
return;
}
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);

free(tree);
}
