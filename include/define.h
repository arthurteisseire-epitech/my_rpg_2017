/*
** EPITECH PROJECT, 2017
** File Name : define.h
** File description:
** by Arthur Teisseire
*/

#ifndef DEFINE_H
#define DEFINE_H

#define TRUE 1
#define FALSE 0

#define DIMG "assets/images/"

#define SUCCESS 0
#define MALLOC_FAILED my_puterror("Malloc failed\n"), -2
#define WRONG_PATH my_puterror("Wrong file path\n"), -3
#define WRONG_CONFIG_PATH my_puterror("In .cfg: Wrong config path\n"), -4
#define TEXTURE_NOT_FOUND my_puterror("In .cfg: Texture not found\n"), -5

#endif
