#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <string>
# include <iostream>

class Intern
{
    public:
        Intern();
        Intern(Intern const & src);
        Intern & operator=(Intern const & rhs);
        ~Intern();

        AForm* makeForm(std::string formName, std::string target);

		AForm* makeShrubberyCreationForm(std::string target);
		AForm* makePresidentialPardonForm(std::string target);
		AForm* makeRobotomyRequestForm(std::string target);
};

#endif