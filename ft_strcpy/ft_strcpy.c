/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:38:08 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/29 12:53:51 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;
	i = 0;
	while (s2[i] != 0)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = 0;
	return (s1);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*s1 = "";
	char	*s2 = "Markos";

	printf("%s\n", ft_strcpy(&s1, s2));
	printf("%s\n", strcpy(&s1, s2));
}
*/
