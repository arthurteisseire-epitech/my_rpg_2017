/*
** EPITECH PROJECT, 2017
** File Name : player.h
** File description:
** by Arthur Teisseire
*/

#ifndef CHARACTER_H
#define CHARACTER_H

#define MAX_ITEMS 1
#define MOVE_UP (sfVector2f){0.0, -1.0}
#define MOVE_LEFT (sfVector2f){-1.0, 0.0}
#define MOVE_DOWN (sfVector2f){0.0, 1.0}
#define MOVE_RIGHT (sfVector2f){1.0, 0.0}
#define DIR_UP 270.0
#define DIR_LEFT 180.0
#define DIR_DOWN 90.0
#define DIR_RIGHT 0.0

#define ANIM_STAY 0
#define ANIM_MOVE 1

#include <SFML/Graphics.h>

typedef struct object_s object_t;
typedef struct rpg_s rpg_t;
typedef struct texture_s texture_t;
typedef struct button_s button_t;
typedef struct vertex_s vertex_t;
typedef struct particule_s particule_t;

typedef struct stat_s {
	int xp;
	int level;
	int light_radius;
	sfColor light_color;
	int xp_to_up;
	int nb_orbe;
} stat_t;

typedef struct player_s {
	sfRectangleShape *rect;
	button_t **items;
	texture_t **anim;
	stat_t *stats;
	sfVector2f pos;
	int id_anim;
	int curr_frame;
	particule_t *particule;
} player_t;

void rotate_player(rpg_t *rpg, float angle);
void move_player(rpg_t *rpg, sfVector2f *pos, sfVector2f move);
void set_player_pos(player_t *player);
void animate_sprite(player_t *player, sfClock *clock);

void player_rotation(rpg_t *rpg);
void player_movement(rpg_t *rpg);
int player_action(rpg_t *rpg);
int player_event(rpg_t *rpg);

void update_xp(rpg_t *rpg, int xp);
int set_inventory_text(rpg_t *rpg);

int load_player_stats(player_t *player);
int save_player_stats(player_t *player);
void reset_player_stats(player_t *player);

int player_room_indicate(rpg_t *rpg, player_t *player);

#endif
