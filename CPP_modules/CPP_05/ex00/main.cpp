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

int main(void) {
    Bureaucrat a("Abel", 100);
    try {
        Bureaucrat b("Franco", 0);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    try {
        Bureaucrat c("Franco", 151);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    Bureaucrat d(a);
    Bureaucrat e = d;

    std::cout << a;
    std::cout << d;
    std::cout << e;
    a.incrementGrade();
    std::cout << a;
    a.decrementGrade();
    std::cout << a;

    Bureaucrat f("Mario", 150);
    std::cout << f;
    f.decrementGrade();
    std::cout << f;
}