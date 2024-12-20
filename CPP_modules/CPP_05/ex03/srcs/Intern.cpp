#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const & src) {
    *this = src;
}

Intern & Intern::operator=(Intern const & rhs) {
    (void)rhs;
    return *this;
}

Intern::~Intern() {}

AForm* Intern::makeForm(std::string formName, std::string target) {
    if (formName == "shrubbery creation") {
        std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
        return new ShrubberyCreationForm(target);
    } else if (formName == "robotomy request") {
        std::cout << "Intern creates RobotomyRequestForm" << std::endl;
        return new RobotomyRequestForm(target);
    } else if (formName == "presidential pardon") {
        std::cout << "Intern creates PresidentialPardonForm" << std::endl;
        return new PresidentialPardonForm(target);
    } else {
        std::cout << "Form name " << formName << " does not exist." << std::endl;
        return NULL;
    }
}