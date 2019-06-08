/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anboilea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 16:05:41 by anboilea          #+#    #+#             */
/*   Updated: 2018/11/15 16:08:39 by anboilea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_nbrlen(long n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while ((n /= 10) > 0)
		i++;
	return (i + 1);
}