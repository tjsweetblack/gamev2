/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_struct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badriano <belmiro@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:38:47 by belmiro           #+#    #+#             */
/*   Updated: 2024/10/07 13:39:19 by badriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	store_player_image(t_game *game)
{
	int	size;

	size = 100;
	game->image.player_right[0] = mlx_xpm_file_to_image(game->init,
			"./assets/bird.xpm", &size, &size);
	game->image.player_right[1] = mlx_xpm_file_to_image(game->init,
			"./assets/bird_sprite/1.xpm", &size, &size);
	game->image.player_right[2] = mlx_xpm_file_to_image(game->init,
			"./assets/bird_sprite/2.xpm", &size, &size);
	game->image.player_right[3] = mlx_xpm_file_to_image(game->init,
			"./assets/bird_sprite/3.xpm", &size, &size);
	game->image.player_right[4] = mlx_xpm_file_to_image(game->init,
			"./assets/bird_sprite/4.xpm", &size, &size);
	game->image.player_right[5] = mlx_xpm_file_to_image(game->init,
			"./assets/bird_sprite/5.xpm", &size, &size);
	game->image.player_right[6] = mlx_xpm_file_to_image(game->init,
			"./assets/bird_sprite/6.xpm", &size, &size);
	game->image.player_right[7] = mlx_xpm_file_to_image(game->init,
			"./assets/bird_sprite/7.xpm", &size, &size);
	game->image.player_left[0] = mlx_xpm_file_to_image(game->init,
			"./assets/bird2.xpm", &size, &size);
	game->image.player_left[1] = mlx_xpm_file_to_image(game->init,
			"./assets/bird_sprite/8.xpm", &size, &size);
	game->image.player_left[2] = mlx_xpm_file_to_image(game->init,
			"./assets/bird_sprite/9.xpm", &size, &size);
	game->image.player_left[3] = mlx_xpm_file_to_image(game->init,
			"./assets/bird_sprite/10.xpm", &size, &size);
	game->image.player_left[4] = mlx_xpm_file_to_image(game->init,
			"./assets/bird_sprite/11.xpm", &size, &size);
	game->image.player_left[5] = mlx_xpm_file_to_image(game->init,
			"./assets/bird_sprite/12.xpm", &size, &size);
	game->image.player_left[6] = mlx_xpm_file_to_image(game->init,
			"./assets/bird_sprite/13.xpm", &size, &size);
	game->image.player_left[7] = mlx_xpm_file_to_image(game->init,
			"./assets/bird_sprite/14.xpm", &size, &size);
}

void	store_coin_image(t_game *game)
{
	int	size;

	size = 100;
	game->image.coin[0] = mlx_xpm_file_to_image(game->init,
			"./assets/coin/coin1.xpm", &size, &size);
	game->image.coin[1] = mlx_xpm_file_to_image(game->init,
			"./assets/coin/coin2.xpm", &size, &size);
	game->image.coin[2] = mlx_xpm_file_to_image(game->init,
			"./assets/coin/coin3.xpm", &size, &size);
	game->image.coin[3] = mlx_xpm_file_to_image(game->init,
			"./assets/coin/coin4.xpm", &size, &size);
	game->image.coin[4] = mlx_xpm_file_to_image(game->init,
			"./assets/coin/coin5.xpm", &size, &size);
	game->image.coin[5] = mlx_xpm_file_to_image(game->init,
			"./assets/coin/coin6.xpm", &size, &size);
	game->image.coin[6] = mlx_xpm_file_to_image(game->init,
			"./assets/coin/coin7.xpm", &size, &size);
}

void	store_to_struct(t_game *game)
{
	int	size;

	size = 100;
	game->move_count = 0;
	game->frame_count = 0;
	game->current_frame = 0;
	store_player_image(game);
	store_coin_image(game);
	game->image.background = mlx_xpm_file_to_image(game->init,
			"./assets/background.xpm", &size, &size);
	game->image.exit = mlx_xpm_file_to_image(game->init,
			"./assets/door.xpm", &size, &size);
	game->image.wall = mlx_xpm_file_to_image(game->init,
			"./assets/wall.xpm", &size, &size);
}
