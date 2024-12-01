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
#include "Form.hpp"

int main() {
    // Test Bureaucrat constructors
    Bureaucrat b1;
    Bureaucrat b2("John", 42);
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

    // Test Form constructors
    Form f1;
    Form f2("Form1", false, 50, 100);
    Form f3(f2);

    // Test Form assignment operator
    f1 = f2;

    // Test Form methods
    std::cout << f1.getName() << " is " << (f1.getSigned() ? "signed" : "not signed") << std::endl;
    f1.setSigned(true);
    std::cout << f1.getName() << " is " << (f1.getSigned() ? "signed" : "not signed") << std::endl;

    // Test Form exceptions
    try {
        f1.beSigned(b1);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    // Test Bureaucrat signing a form
    b2.signForm(f2);

    return 0;
}