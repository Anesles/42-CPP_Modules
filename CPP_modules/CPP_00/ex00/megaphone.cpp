/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 10:38:42 by brumarti          #+#    #+#             */
/*   Updated: 2023/07/28 11:03:23 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

int main(int argc, char **argv)
{
	int	i = 1, j;
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				putchar(toupper(argv[i][j]));
				j++;
			}
			i++;
		}	
		std::cout << std::endl;
	}
	return 0;
}
