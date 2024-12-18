#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    public:
        AForm();
        AForm( AForm const & src );
        AForm(std::string name, bool isSigned, int signGrade, int executeGrade);
        virtual ~AForm();
        AForm &		operator=( AForm const & rhs );

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
        virtual void execute(Bureaucrat const & executor) const = 0;

    private:
        const std::string	_name;
        bool	_signed;
        const int	_gradeSign;
        const int	_gradeExecute;
};

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif