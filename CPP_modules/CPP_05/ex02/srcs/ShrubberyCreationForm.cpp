#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("ShrubberyCreationForm", false, 145, 137), _target("") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm("ShrubberyCreationForm", false, 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
    : AForm(src), _target(src._target) {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
    if (this != &rhs) {
        AForm::operator=(rhs);
        this->_target = rhs._target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if (!this->getSigned())
        throw AForm::GradeTooLowException();
    if (executor.getGrade() > this->getExecuteGrade())
        throw AForm::GradeTooLowException();

    std::ofstream ofs((this->_target + "_shrubbery").c_str());
    if (ofs.is_open()) {
        ofs << "       _-_" << std::endl;
        ofs << "    /~~   ~~\\" << std::endl;
        ofs << " /~~         ~~\\" << std::endl;
        ofs << "{               }" << std::endl;
        ofs << " \\  _-     -_  /" << std::endl;
        ofs << "   ~  \\ //  ~" << std::endl;
        ofs << "_- -   | | _- _" << std::endl;
        ofs << "  _ -  | |   -_" << std::endl;
        ofs << "      // \\" << std::endl;
        ofs.close();
    }
}