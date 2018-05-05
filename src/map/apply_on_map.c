/*
** EPITECH PROJECT, 2017
** File Name : get_tile.c
** File description:
** by Arthur Teisseire
*/

#include <stddef.h>
#include "my.h"
#include "scene.h"
#include "tile.h"

tile_t *apply_on_map(map_t *map, get_tile_t func, void *data)
{
	tile_t *tile;
	int i = 0;

	while (map->tiles[i]) {
		tile = func(map, map->tiles[i], data);
		if (tile != NULL)
			return (tile);
		i++;
	}
	return (map->tiles[0][0]);
}

tile_t *get_tile_by_name(map_t *map, tile_t **tiles, void *name)
{
	int i = 0;

	(void)map;
	while (tiles[i]) {
		if (my_strcmp(tiles[i]->name, name) == 0)
			return (tiles[i]);
		i++;
	}
	return (NULL);
}

tile_t *set_tile_by_chanel(map_t *map, tile_t **tiles, void *data)
{
	int i = 0;
	tile_t *tile = data;

	while (tiles[i]) {
		if (tile->chanel == tiles[i]->chanel &&
		tiles[i]->action != NULL && tiles[i] != tile)
			tiles[i]->action(map, tiles[i]);
		i++;
	}
	return (NULL);
}

sfVector2f get_pos_tile_by_name(map_t *map, pos_tile_t func, void *name)
{
	int y = 0;
	float x = 0;

	while (map->tiles[y]) {
		x = func(map, map->tiles[y], name);
		if (x != -1)
			return ((sfVector2f){y, x});
		y++;
	}
	return ((sfVector2f){0.0, 0.0});
}

int tile_pos_line(map_t __attribute((unused))*map, tile_t **tiles, void *name)
{
	int i = 0;

	while (tiles[i]) {
		if (my_strcmp(tiles[i]->name, name) == 0)
			return (i);
		i++;
	}
	return (-1);
}
