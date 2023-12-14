/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:42:42 by brumarti          #+#    #+#             */
/*   Updated: 2023/12/14 17:17:56 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	replace(char **argv, std::string &file)
{
	std::ofstream	outfile;
	int				pos;

	outfile.open((std::string(argv[1]) + ".replace").c_str());
	if (outfile.fail())
	{
		std::cout << "Error creating file!" << std::endl;
		return (1);
	}

	for(int i = 0; i < (int)file.length(); i++)
	{
		pos = file.find(argv[2], i);
		if (pos != (int)std::string::npos && pos == i)
		{
			outfile << argv[3];
			i += std::string(argv[2]).length() - 1;
		}
		else
			outfile << file[i];
	}
	outfile.close();
	return (0);	
}

int main(int argc, char **argv)
{
	char			car;
	std::ifstream 	infile;
	std::string		wholeFile;
	
	if (argc != 4)
	{
		std::cout << "Usage: ./a.out <filename> <string1> <string2>" << std::endl;
		return 1;
	}
	
	infile.open(argv[1]);
	if (infile.fail())
	{
		std::cout << "File not found!" << std::endl;
		return 1;
	}
	while(!infile.eof() && infile >> std::noskipws >> car)
		wholeFile += car;
	infile.close();
	return (replace(argv, wholeFile));
}