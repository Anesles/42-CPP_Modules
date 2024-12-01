#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(): _name("Default"), _signed(false), _gradeSign(50), _gradeExecute(50) {
	std::cout << "Default constructor: Form " << this->getName() << " created !" << std::endl;
}

Form::Form( const Form & src ): _name(src._name), _signed(src._signed), _gradeSign(src._gradeSign), _gradeExecute(src._gradeExecute)
{
	std::cout << "Copy constructor: Form " << this->getName() << " created !" << std::endl;
}

Form::Form(std::string name, bool isSigned, int signGrade, int executeGrade): _name(name), _signed(isSigned), _gradeSign(signGrade), _gradeExecute(executeGrade) {
	std::cout << "Normal constructor: Form " << this->getName() << " created !" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	std::cout << "Destroyed Form " << this->getName() << std::endl; 
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	this->_signed = rhs.getSigned();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o 	<< "Form:" << std::endl
		<< "	Name: " << i.getName() << std::endl
		<< "	Signed: " << i.getSigned() << std::endl
		<< "	Sign Grade: " << i.getSignGrade() << std::endl
		<< "	Execute Grade: " << i.getExecuteGrade() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Form::getName() const {
	return this->_name;
}

bool Form::getSigned() const {
	return this->_signed;
}

int Form::getSignGrade() const {
	return this->_gradeSign;
}

int Form::getExecuteGrade() const {
	return this->_gradeExecute;
}

void Form::setSigned(bool sign) {
	this->_signed = sign;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade is too high !";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade is too low !";
}

void Form::beSigned(Bureaucrat bur) {
	if(bur.getGrade() <= this->getSignGrade()) {
		this->setSigned(true);
		bur.signForm(*this);
	} else {
		throw Form::GradeTooLowException();
		bur.signForm(*this);
	}
}

/* ************************************************************************** */