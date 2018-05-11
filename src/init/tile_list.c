/*
** EPITECH PROJECT, 2017
** File Name : obj_list.c
** File description:
** by Arthur Teisseire
*/

#include "my.h"
#include "rpg.h"
#include "tile.h"
#include "define.h"
#include "texture.h"

const tile_list_t tile_list[NB_TILE] = {
	{{0x00, 0x00, 0x01, 0x00},
		WALL_STR, TRUE, TRUE, FALSE, NULL, TX_TILE},
	{{0x00, 0x00, 0x02, 0x00},
		GROUND_STR, FALSE, FALSE, FALSE, NULL, TX_TILE},
	{{0x00, 0x00, 0x03, 0x00},
		GLASS_STR, TRUE, TRUE, FALSE, action_door, TX_TILE},
	{{0x00, 0x00, 0x04, 0x00},
		SPAWN_STR, FALSE, FALSE, FALSE, NULL, TX_TILE},
	{{0x00, 0x00, 0x05, 0x00},
		END_STR, FALSE, FALSE, TRUE, action_end, TX_TILE},
	{{0x00, 0x00, 0x06, 0x00},
		LAS_STR, FALSE, FALSE, TRUE, action_laser, TX_TILE_LASER},
	{{0x00, 0x00, 0x07, 0x00},
		LEV_STR, FALSE, FALSE, TRUE, action_lever, TX_TILE_LEVER},
	{{0x00, 0x00, 0x08, 0x00},
		DOOR_STR, TRUE, TRUE, FALSE, action_door, TX_TILE_DOOR},
	{{0x00, 0x00, 0x09, 0x00},
		ROOM_STR, FALSE, FALSE, TRUE, action_room, TX_TILE_ROOM},
	{{0x00, 0x00, 0x0a, 0x00},
		CAP_STR, TRUE, TRUE, TRUE, action_laser_captor,
		TX_TILE_LASER_CAPTOR},
	{{0x00, 0x00, 0x0b, 0x00},
		"torch", TRUE, TRUE, FALSE, NULL, TX_TILE_LIGHT},
	/*
	 *{{0x00, 0x00, 0x06, 0x00},
	 *	"door", TRUE, TRUE, NULL, TX_TILE_DOOR},
	 *{{0x00, 0x00, 0x07, 0x00},
	 *	"switch", FALSE, TRUE, NULL, TX_TILE_SWITCH},
	 *{{0x00, 0x00, 0x08, 0x00},
	 *	"ls_beam", TRUE, TRUE, NULL, TX_TILE_LS_BEAM},
	*/
};

int index_tile_by_color(sfColor color)
{
	for (int i = 0; i < NB_TILE; i++)
		if ((MASK_NAME(tile_list[i].color) == (MASK_NAME(color))))
			return (i);
	return (0);
}