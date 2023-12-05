/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:40:36 by brumarti          #+#    #+#             */
/*   Updated: 2023/12/05 15:52:24 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout	<< "Address of string:    " << &string << std::endl
				<< "Address of stringPTR: " << stringPTR << std::endl
				<< "Address of stringREF: " << &stringREF << std::endl
				<< "------------------PART 2------------------" << std::endl
				<< "Value of string:    " << string << std::endl
				<< "Value of stringPTR: " << *stringPTR << std::endl
				<< "Value of stringREF: " << stringREF << std::endl;
}