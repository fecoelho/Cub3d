/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check_args.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <fcoelho@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 14:42:27 by fcoelho           #+#    #+#             */
/*   Updated: 2020/10/26 14:43:34 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static int	ft_is_cub(char *str)
{
	size_t	i;

	i = ft_strlen(str) - 4;
	if (ft_memcmp(&str[i], ".cub", 4))
		return (0);
	return (1);
}

int			check_args(int argc, char **argv)
{
	if (argc == 1)
		return (ft_arg_error(-1));
	else if (argc > 3)
		return (ft_arg_error(-2));
	else if (!(ft_is_cub(argv[1])))
		return (ft_arg_error(-3));
	else if (argc == 3 && ft_memcmp(argv[2], "--save", 6))
		return (ft_arg_error(-4));
	return (0);
}

int			is_identifier(char *line)
{
	if (ft_c_is_in(line[0], "RCFS") ||
		(line[0] == 'N' && line[1] == 'O') ||
		(line[0] == 'W' && line[1] == 'E') ||
		(line[0] == 'E' && line[1] == 'A') ||
		(line[0] == 'S' && line[1] == '0'))
		return (TRUE);
	return (FALSE);
}
