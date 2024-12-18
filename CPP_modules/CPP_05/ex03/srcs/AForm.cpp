#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm(): _name("Default"), _signed(false), _gradeSign(50), _gradeExecute(50) {
    std::cout << "Default constructor: AForm " << this->getName() << " created !" << std::endl;
}

AForm::AForm( const AForm & src ): _name(src._name), _signed(src._signed), _gradeSign(src._gradeSign), _gradeExecute(src._gradeExecute)
{
    std::cout << "Copy constructor: AForm " << this->getName() << " created !" << std::endl;
}

AForm::AForm(std::string name, bool isSigned, int signGrade, int executeGrade): _name(name), _signed(isSigned), _gradeSign(signGrade), _gradeExecute(executeGrade) {
    std::cout << "Normal constructor: AForm " << this->getName() << " created !" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
    std::cout << "Destroyed AForm " << this->getName() << std::endl; 
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &				AForm::operator=( AForm const & rhs )
{
    this->_signed = rhs.getSigned();
    return *this;
}

std::ostream &			operator<<( std::ostream & o, AForm const & i )
{
    o 	<< "AForm:" << std::endl
        << "	Name: " << i.getName() << std::endl
        << "	Signed: " << i.getSigned() << std::endl
        << "	Sign Grade: " << i.getSignGrade() << std::endl
        << "	Execute Grade: " << i.getExecuteGrade() << std::endl;
    return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string AForm::getName() const {
    return this->_name;
}

bool AForm::getSigned() const {
    return this->_signed;
}

int AForm::getSignGrade() const {
    return this->_gradeSign;
}

int AForm::getExecuteGrade() const {
    return this->_gradeExecute;
}

void AForm::setSigned(bool sign) {
    this->_signed = sign;
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "Grade is too high !";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Grade is too low !";
}

void AForm::beSigned(Bureaucrat const & bur) {
    if(bur.getGrade() <= this->getSignGrade()) {
        this->setSigned(true);
    } else {
        throw AForm::GradeTooLowException();
    }
}

/* ************************************************************************** */