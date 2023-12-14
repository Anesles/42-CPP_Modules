/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:21:59 by brumarti          #+#    #+#             */
/*   Updated: 2023/12/14 17:34:37 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HARL_H
#	define HARL_H
#	include <string>
#	include <iostream>

	class Harl
	{
		public:
			Harl(void);
			~Harl(void);
			void complain(std::string level);
		private:
			void debug(void);
			void info(void);
			void warning(void);
			void error(void);
	};

#endif