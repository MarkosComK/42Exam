/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:21:20 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/28 18:29:38 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	//unsigned int	power;
	//unsigned int	mult;
	/*
	power = 2;
	mult = 2;
	while (power * mult <= n)
	{
		if (power * mult == n)
			return (1);
		mult += 2;
	}
	return (0);
	*/
	if (n % 2 == 0)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", is_power_of_2(4));
	printf("%i\n", is_power_of_2(6));
	printf("%i\n", is_power_of_2(8));
	printf("%i\n", is_power_of_2(10));
	printf("%i\n", is_power_of_2(7));
}
*/
