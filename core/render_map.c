/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badriano <belmiro@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:04:56 by belmiro           #+#    #+#             */
/*   Updated: 2024/10/08 07:19:26 by badriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	ft_render_player_right(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->init,
		game->window,
		game->image.player_right[game->current_frame], x * 100, y * 100);
	game->frame_count++;
	if (game->frame_count == 400)
	{
		game->current_frame++;
		if (game->current_frame >= 8)
			game->current_frame = 0;
		game->frame_count = 0;
	}
}
void	ft_render_player_left(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->init,
		game->window,
		game->image.player_left[game->current_frame], x * 100, y * 100);
	game->frame_count++;
	if (game->frame_count == 400)
	{
		game->current_frame++;
		if (game->current_frame >= 8)
			game->current_frame = 0;
		game->frame_count = 0;
	}
}

void	ft_render_coin(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->init,
		game->window,
		game->image.coin[game->current_frame], x * 100, y * 100);
	game->frame_count++;
	if (game->frame_count == 4000)
	{
		game->current_frame++;
		if (game->current_frame == 7)
			game->current_frame = 0;
		game->frame_count = 0;
	}
}

void	ft_render(t_game *game, int y, int x)
{
	if (game->map[y][x] == 'P')
	{
		if (game->player_facing == 0)
			ft_render_player_right(game, x, y);
		else
			ft_render_player_left(game, x, y);
	}
	else if (game->map[y][x] == '0')
	{
		mlx_put_image_to_window(game->init,
			game->window, game->image.background, x * 100, y * 100);
	}
	else if (game->map[y][x] == 'E')
	{
		mlx_put_image_to_window(game->init,
			game->window, game->image.exit, x * 100, y * 100);
	}
	else if (game->map[y][x] == '1')
	{
		mlx_put_image_to_window(game->init,
			game->window, game->image.wall, x * 100, y * 100);
	}
	else if (game->map[y][x] == 'C')
	{
		ft_render_coin(game, x, y);
	}
}

int	render_map(t_game *game)
{
	int	y;
	int	x;

	y = 0;
	x = 0;
	while (game->map[y])
	{
		x = 0;
		while (game->map[y][x])
		{
			ft_render(game, y, x);
			x++;
		}
		y++;
	}
	return (0);
}

int	render_loop(t_game *game)
{
	render_map(game);
	return (0);
}
