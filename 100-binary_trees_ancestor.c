#include "binary_trees.h"

/**
 * binary_trees_ancestor - Find the lowest common ancestor of two nodes.
 * @first: A pointer to the first node.
 * @second: A pointer to the second node.
 *
 * Return: A pointer to the lowest common ancestor node of the two given nodes.
 *         If no common ancestor is found, it returns NULL.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
size_t depth1, depth2;

if (first == NULL || second == NULL)
return (NULL);

depth1 = binary_tree_depth(first);
depth2 = binary_tree_depth(second);

while (depth1 > depth2)
{
first = first->parent;
depth1--;
}

while (depth2 > depth1)
{
second = second->parent;
depth2--;
}
while (first != second)
{
first = first->parent;
second = second->parent;
}
return ((binary_tree_t *)first);
}
