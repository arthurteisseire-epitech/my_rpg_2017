/*
** EPITECH PROJECT, 2017
** File Name : destroy_window.c
** File description:
** by Arthur Teisseire
*/

#include <stdlib.h>
#include "rpg.h"

void destroy_window(rpg_t *rpg)
{
	sfRenderWindow_destroy(rpg->window);
}
