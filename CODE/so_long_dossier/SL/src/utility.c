/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moni <moni@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:09:42 by moni              #+#    #+#             */
/*   Updated: 2024/05/29 12:16:45 by moni             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Fonctions utilitaires pour le jeu, telles que la gestion des erreurs et la validation. */

#include "../includes/so_long.h"

int	count_height_map(t_map *map)
{
	int		i;
	t_list	*current;

	i = 0;
	current = map->lines;
	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}

void	print_content(void *content)
{
	ft_printf("%s", (char *)content);
}

// ft_error, ft_check_win, ft_step, check_collide, check_border, check_all_char,
// check_map, check_map_proportions, check_map_mandatory, is_char_valid, find_char_player,
// is_next_char_ok, map_error, mana_management, mana_regen, mana_cost_fly, probability:
// Diverses fonctions utilitaires pour la gestion des erreurs, la validation de 
// la carte, et d'autres opérations d'assistance.
