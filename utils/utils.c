/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badriano <belmiro@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 08:02:58 by belmiro           #+#    #+#             */
/*   Updated: 2024/10/07 13:59:58 by badriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	free_map(char **map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		free(map[i]);
		i++;
	}
	free(map);
}

void	free_images(t_game *game)
{
    int	i;
    int	j;
    int	k;

    i = 0;
    j = 0;
    k = 0;

    if (game->image.background)
        mlx_destroy_image(game->init, game->image.background);
    if (game->image.exit)
        mlx_destroy_image(game->init, game->image.exit);
    if (game->image.wall)
        mlx_destroy_image(game->init, game->image.wall);

    while (i < 8)
    {
        if (game->image.player_right[i])
            mlx_destroy_image(game->init, game->image.player_right[i]);
        i++;
    }
    while (j < 8)
    {
        if (game->image.player_left[j])
            mlx_destroy_image(game->init, game->image.player_left[j]);
        j++;
    }
    while (k < 7)
    {
        if (game->image.coin[k])
            mlx_destroy_image(game->init, game->image.coin[k]);
        k++;
    }
}
void	free_game_resources(t_game *game)
{
	int	i;

	if (game->map)
	{
		i = 0;
		while (game->map[i])
		{
			free(game->map[i]);
			i++;
		}
		free(game->map);
	}
	free_images(game);
	if (game->window)
	{
		mlx_destroy_window(game->init, game->window);
	}
	if (game->init)
	{
		mlx_destroy_display(game->init);
		free(game->init);
	}
}
