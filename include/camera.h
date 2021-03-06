/*
** EPITECH PROJECT, 2017
** File Name : camera.h
** File description:
** by Arthur Teisseire
*/

#ifndef CAMERA_H
#define CAMERA_H

#include <SFML/Graphics/Types.h>

typedef struct camera_s {
	sfVector2f *scale;
	sfVector2f *offset;
	sfVector2f *angle;
} camera_t;

#endif
