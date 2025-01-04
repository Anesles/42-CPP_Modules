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

AForm* Intern::makeShrubberyCreationForm(std::string target) {
    return new ShrubberyCreationForm(target);
}

AForm* Intern::makeRobotomyRequestForm(std::string target) {
    return new RobotomyRequestForm(target);
}

AForm* Intern::makePresidentialPardonForm(std::string target) {
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string formName, std::string target) {
    struct FormType {
        std::string name;
        AForm* (Intern::*createForm)(std::string target);
    };

    FormType formTypes[] = {
        {"shrubbery creation", &Intern::makeShrubberyCreationForm},
        {"robotomy request", &Intern::makeRobotomyRequestForm},
        {"presidential pardon", &Intern::makePresidentialPardonForm}
    };

    for (int i = 0; i < 3; ++i) {
        if (formTypes[i].name == formName) {
            std::cout << "Intern creates " << formName << std::endl;
            return (this->*formTypes[i].createForm)(target);
        }
    }

    std::cout << "Form name " << formName << " does not exist." << std::endl;
    return NULL;
}