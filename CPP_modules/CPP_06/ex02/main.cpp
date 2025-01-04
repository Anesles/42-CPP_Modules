#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate() {
    int random = rand() % 3;
    if (random == 0)
        return new A();
    else if (random == 1)
        return new B();
    else
        return new C();
}

void identify(Base* p) {
    if (p == NULL) {
        std::cout << "Pointer: NULL" << std::endl;
        return;
    }
    if (dynamic_cast<A*>(p))
        std::cout << "Pointer: A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Pointer: B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Pointer: C" << std::endl;
    else
        std::cout << "Pointer: Unknown" << std::endl;
}

void identify(Base& p) {
    try {
        A& a = dynamic_cast<A&>(p);
        std::cout << "Reference: A" << std::endl;
        (void)a;
    } catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
        try {
            B& b = dynamic_cast<B&>(p);
            std::cout << "Reference: B" << std::endl;
            (void)b;
        } catch (const std::exception &e) {
            std::cout << e.what() << std::endl;
			try {
                C& c = dynamic_cast<C&>(p);
                std::cout << "Reference: C" << std::endl;
                (void)c;
            } catch (const std::exception &e) {
				std::cout << e.what() << std::endl;
                std::cout << "Reference: Unknown" << std::endl;
            }
        }
    }
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Random tests
    for (int i = 0; i < 5; ++i) {
        std::cout << "=== Random Test " << i + 1 << " ===" << std::endl;
        Base* base = generate();
        identify(base);
        identify(*base);
        delete base;
        std::cout << "=== End of Random Test " << i + 1 << " ===" << std::endl << std::endl;
    }

    // Explicit tests
    std::cout << "=== Explicit Tests ===" << std::endl;
    A a;
    B b;
    C c;
    Base* nullBase = NULL;

    identify(&a);
    identify(a);
    identify(&b);
    identify(b);
    identify(&c);
    identify(c);
    identify(nullBase);
    std::cout << "=== End of Explicit Tests ===" << std::endl;

    return 0;
}