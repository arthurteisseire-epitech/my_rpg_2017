/*
** EPITECH PROJECT, 2017
** File Name : init_event.c
** File description:
** by Arthur Teisseire
*/

#include <stdlib.h>
#include "rpg.h"

int init_event(rpg_t *rpg)
{
	rpg->event = malloc(sizeof(sfEvent));
	if (rpg->event == NULL)
		return (MALLOC_FAILED);
	return (0);
}