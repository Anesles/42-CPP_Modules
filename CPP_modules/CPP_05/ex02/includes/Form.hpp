#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:

		Form();
		Form( Form const & src );
		Form(std::string name, bool isSigned, int signGrade, int executeGrade);
		~Form();
		Form &		operator=( Form const & rhs );

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

		void	setSigned(bool sign);

		std::string getName() const;
		bool	getSigned() const;
		int	getSignGrade() const;
		int	getExecuteGrade() const;

		void beSigned(Bureaucrat const & bur);

	private:

		const std::string	_name;
		bool	_signed;
		const int	_gradeSign;
		const int	_gradeExecute;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* **********************************************************FORM_H */