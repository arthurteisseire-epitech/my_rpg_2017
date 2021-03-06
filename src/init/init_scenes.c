/*
** EPITECH PROJECT, 2017
** File Name : init_scene.h
** File description:
** by Arthur Teisseire
*/

#include "libconfig.h"
#include <stdlib.h>
#include <memory.h>
#include "my.h"
#include "rpg.h"
#include "scene.h"
#include "button.h"
#include "init.h"
#include "tile.h"
#include "texture.h"
#include "event.h"
#include "define.h"
#include "tool.h"

scene_func get_func_scene(char const *ft)
{
	if (ft == NULL)
		return (ft_scene[0].scene_func);
	for (int i = 0; i != NB_FT_SCENE; i++)
		if (my_strcmp(ft, ft_scene[i].name) == 0)
			return (ft_scene[i].scene_func);
	return (NULL);
}

int init_scenes(rpg_t *rpg)
{
	config_setting_t *setting;

	setting = config_setting_lookup(rpg->set, "scenes");
	if (setting == NULL)
		return (my_puterror("lookup scenes: "), WRONG_CONFIG_PATH);
	rpg->nb_scenes = config_setting_length(setting);
	rpg->scenes = malloc(sizeof(scene_t *) * (rpg->nb_scenes + 1));
	CM(rpg->scenes);
	for (int i = 0; i < rpg->nb_scenes; i++) {
		rpg->scenes[i] = malloc(sizeof(scene_t));
		CM(rpg->scenes[i]);
		rpg->scenes[i]->anim_tiles = NULL;
		rpg->curr_scene = i;
		DR(fill_scene(rpg, setting, i));
	}
	rpg->scenes[rpg->nb_scenes] = NULL;
	return (SUCCESS);
}

int fill_scene(rpg_t *rpg, config_setting_t *scenes_setting, int index)
{
	char const *ft = NULL;
	config_setting_t *scene_setting = config_setting_get_elem(
		scenes_setting, index);
	const char *str;

	config_setting_lookup_string(scene_setting, "name", &ft);
	rpg->scenes[index]->event = get_func_scene(ft);
	rpg->scenes[index]->completed = FALSE;
	DR(init_buttons(rpg, &rpg->scenes[index]->buttons, scene_setting));
	if (config_setting_lookup_string(scene_setting, "save", &str)) {
		DR(init_map(rpg, &rpg->scenes[index]->map, str));
	} else
		rpg->scenes[index]->map = NULL;
	return (SUCCESS);
}
