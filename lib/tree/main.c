/*
** EPITECH PROJECT, 2017
** File Name : main.c
** File description:
** by Arthur Teisseire
*/

#include <stdio.h>
#include <string.h>
#include "btree.h"

#define NB_ITEMS 4

static const char items[][10] = {
	"abbb",
	"bbbb",
	"cccc",
	"dddd",
	"baaa",
};

int freef(void *root)
{
	void *to_free = root;

	root = NULL;
	free(to_free);
	return (0);
}

int dispf(void *item)
{
	puts(item);
	return (0);
}

int main(void)
{
	btree_t *root = btree_create_node((void *)items[0]);

	for (int i = 1; i < NB_ITEMS; i++)
		btree_insert_data(root, (void *)items[i], strcmp);
	btree_apply_infix(root, dispf);
	void *item = btree_search_item(root, "dddd", strcmp);
	if (item)
		puts(item);
	int nb_nodes = btree_node_count(root);
	int nb_levels = btree_level_count(root);
	("NB_NODES: %d\n", nb_nodes);
	("NB_LEVELS: %d\n", nb_levels);
	btree_free(root, NULL);
	return (0);
}
