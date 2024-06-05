#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
	std::cout << this->_name <<" is here !" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _name(src._name)
{
	*this = src;
	std::cout << this->_name <<" is here !" << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade)
{
	checkGrade(grade);
	std::cout << this->_name <<" is here !" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << this->_name <<" is gone..." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	this->_grade = rhs._grade;
	return *this;
}

std::ostream& operator<<(std::ostream& stream, Bureaucrat& bur) {
	stream << bur.getName() << ", bureaucrat grade " << bur.getGrade() << '.' << std::endl;
	return (stream);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Bureaucrat::checkGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return;
}

void Bureaucrat::incrementGrade() {
	int newGrade = this->_grade--;

	checkGrade(newGrade);
	this->_grade = newGrade;
}

void Bureaucrat::decrementGrade() {
	int newGrade = this->_grade++;

	checkGrade(newGrade);
	this->_grade = newGrade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

	std::string Bureaucrat::getName() const {
		return this->_name;
	}

	int Bureaucrat::getGrade() const {
		return this->_grade;
	}

/* ************************************************************************** */