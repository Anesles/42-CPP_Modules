/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 15:14:43 by brumarti          #+#    #+#             */
/*   Updated: 2024/05/10 16:09:29 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat( Bureaucrat const & src );
		Bureaucrat &		operator=( Bureaucrat const & rhs );

		Bureaucrat( std::string name, int grade );

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		void checkGrade(int grade);
		void signForm(AForm & form);
		
		std::string getName() const;
		int getGrade() const;

		void incrementGrade();
		void decrementGrade();

		void executeForm(AForm const & form);
	private:
		const std::string _name;
		int _grade; 
};

std::ostream& operator<<(std::ostream& stream, Bureaucrat& bur);

#endif