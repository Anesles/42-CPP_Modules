/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 15:11:38 by brumarti          #+#    #+#             */
/*   Updated: 2024/05/10 16:26:20 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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

    return 0;
}