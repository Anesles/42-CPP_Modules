#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    // Test Bureaucrat constructors
    Bureaucrat b1;
    Bureaucrat b2("John", 2);
    Bureaucrat b3(b2);

    // Test Bureaucrat assignment operator
    b1 = b2;

    // Test Bureaucrat methods
    std::cout << b1.getName() << " has grade " << b1.getGrade() << std::endl;
    b1.incrementGrade();
    std::cout << b1.getName() << " has grade " << b1.getGrade() << std::endl;
    b1.decrementGrade();
    std::cout << b1.getName() << " has grade " << b1.getGrade() << std::endl;

    // Test Bureaucrat exceptions
    try {
        Bureaucrat b4("High", 0);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat b5("Low", 151);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    // Test AForm constructors
    ShrubberyCreationForm f1("home");
    RobotomyRequestForm f2("robot");
    PresidentialPardonForm f3("criminal");

    // Test AForm methods
    b2.signForm(f1);
    b2.executeForm(f1); 

    b2.signForm(f2);
    b2.executeForm(f2);

    b2.signForm(f3);
    b2.executeForm(f3);

    // Test Intern
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    if (rrf) {
        b2.signForm(*rrf);
        b2.executeForm(*rrf);
        delete rrf;
    }

    // Additional tests for Intern
    AForm* invalidForm = someRandomIntern.makeForm("invalid form", "Target");
    if (!invalidForm) {
        std::cout << "Invalid form creation handled correctly." << std::endl;
    }

    // Additional tests for Bureaucrat
    try {
        Bureaucrat b6("Alice", 1);
        b6.incrementGrade(); // Should throw an exception
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat b7("Bob", 150);
        b7.decrementGrade(); // Should throw an exception
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    // Additional tests for AForm
    try {
        ShrubberyCreationForm f4("garden");
        Bureaucrat b8("Charlie", 150);
        b8.signForm(f4); // Should throw an exception
        b8.executeForm(f4); // Should throw an exception
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        RobotomyRequestForm f5("robot");
        Bureaucrat b9("Dave", 50);
        b9.executeForm(f5); // Should throw an exception because the form is not signed
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}