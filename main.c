/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alazunin < alazunin@student.42london.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:55:29 by alazunin          #+#    #+#             */
/*   Updated: 2024/03/10 18:16:17 by alazunin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	main(void)
{
	rush(-34, -23);
	rush(34, 23);
	rush(-34, 23);
	rush(34, -23);
	return (0);
}