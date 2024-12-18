#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("RobotomyRequestForm", false, 72, 45), _target("") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : AForm("RobotomyRequestForm", false, 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
    : AForm(src), _target(src._target) {}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
    if (this != &rhs) {
        AForm::operator=(rhs);
        this->_target = rhs._target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (!this->getSigned())
        throw AForm::GradeTooLowException();
    if (executor.getGrade() > this->getExecuteGrade())
        throw AForm::GradeTooLowException();

    std::cout << "Drilling noises..." << std::endl;
    if (rand() % 2)
        std::cout << this->_target << " has been robotomized successfully." << std::endl;
    else
        std::cout << "The robotomy failed." << std::endl;
}