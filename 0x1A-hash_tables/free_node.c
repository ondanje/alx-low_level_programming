#include"hash_tables.h"
/**
 * free_node- function to free nodes
 * @node: the node to be freed
 * Return: void /nothing
*/

void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
