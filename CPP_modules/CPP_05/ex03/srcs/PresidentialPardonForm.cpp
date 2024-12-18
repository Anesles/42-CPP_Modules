#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("PresidentialPardonForm", false, 25, 5), _target("") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : AForm("PresidentialPardonForm", false, 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
    : AForm(src), _target(src._target) {}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
    if (this != &rhs) {
        AForm::operator=(rhs);
        this->_target = rhs._target;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (!this->getSigned())
        throw AForm::GradeTooLowException();
    if (executor.getGrade() > this->getExecuteGrade())
        throw AForm::GradeTooLowException();

    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}