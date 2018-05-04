/*
** EPITECH PROJECT, 2017
** File Name : tile.h
** File description:
** by Arthur Teisseire
*/

#ifndef OBJECT_H
#define OBJECT_H

#include <SFML/Graphics.h>

#define MASK_NAME(color) ((color).b & 0x0f)
#define NB_TILE 6
#define SIZE_TILE 64

typedef struct sprite_s sprite_t;
typedef struct rpg_s rpg_t;
typedef struct texture_s texture_t;
typedef struct map_s map_t;

typedef struct laser_s {
	char horizontal;
	char vertical;
	sfRectangleShape *rect;
} laser_t;

typedef struct tile_s {
	char *name;
	char active;
	char direction;
	char chanel;
	char player_col;
	char laser_col;
	int (*action)(map_t *, struct tile_s *);
	laser_t *laser;
	sfSprite *sprite;
} tile_t;

typedef struct tile_list_s {
	sfColor color;
	char *name;
	char player_col;
	char laser_col;
	int (*action)(map_t *, struct tile_s *);
	int idx_texture;
} tile_list_t;

typedef tile_t *(*get_tile_t)(map_t *, tile_t **, void *);

extern const tile_list_t tile_list[];

int index_tile_by_color(sfColor color);
tile_t *apply_on_map(map_t *map, get_tile_t func, void *data);
tile_t *get_tile_by_name(map_t *map, tile_t **tiles, void *name);
tile_t *set_tile_by_chanel(map_t *map, tile_t **tiles, void *chanel);

int action_lever(map_t *map, tile_t *tile);
int action_door(map_t __attribute((unused))*map, tile_t *tile);

#endif
