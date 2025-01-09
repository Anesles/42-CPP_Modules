#include <iostream>
#include "MutantStack.hpp"

#include <iostream>
#include "MutantStack.hpp"

int main() {
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }

        std::stack<int> s(mstack);
    }
    
    {
        // Test with strings
        MutantStack<std::string> mstack;
        mstack.push("hello");
        mstack.push("world");
        std::cout << "Top element: " << mstack.top() << std::endl;
        mstack.pop();
        std::cout << "Stack size after pop: " << mstack.size() << std::endl;
        mstack.push("foo");
        mstack.push("bar");
        mstack.push("baz");

        MutantStack<std::string>::iterator it = mstack.begin();
        MutantStack<std::string>::iterator ite = mstack.end();
        std::cout << "Stack elements: ";
        while (it != ite) {
            std::cout << *it << " ";
            ++it;
        }
        std::cout << std::endl;

        std::stack<std::string> s(mstack);
    }

    {
        // Test with floats
        MutantStack<float> mstack;
        mstack.push(1.1f);
        mstack.push(2.2f);
        std::cout << "Top element: " << mstack.top() << std::endl;
        mstack.pop();
        std::cout << "Stack size after pop: " << mstack.size() << std::endl;
        mstack.push(3.3f);
        mstack.push(4.4f);
        mstack.push(5.5f);

        MutantStack<float>::iterator it = mstack.begin();
        MutantStack<float>::iterator ite = mstack.end();
        std::cout << "Stack elements: ";
        while (it != ite) {
            std::cout << *it << " ";
            ++it;
        }
        std::cout << std::endl;

        std::stack<float> s(mstack);
    }

    // Additional tests
    {
        // Test with double
        MutantStack<double> mstack;
        mstack.push(1.123);
        mstack.push(2.234);
        std::cout << "Top element: " << mstack.top() << std::endl;
        mstack.pop();
        std::cout << "Stack size after pop: " << mstack.size() << std::endl;
        mstack.push(3.345);
        mstack.push(4.456);
        mstack.push(5.567);

        MutantStack<double>::iterator it = mstack.begin();
        MutantStack<double>::iterator ite = mstack.end();
        std::cout << "Stack elements: ";
        while (it != ite) {
            std::cout << *it << " ";
            ++it;
        }
        std::cout << std::endl;

        std::stack<double> s(mstack);
    }

    {
        // Test with char
        MutantStack<char> mstack;
        mstack.push('a');
        mstack.push('b');
        std::cout << "Top element: " << mstack.top() << std::endl;
        mstack.pop();
        std::cout << "Stack size after pop: " << mstack.size() << std::endl;
        mstack.push('c');
        mstack.push('d');
        mstack.push('e');

        MutantStack<char>::iterator it = mstack.begin();
        MutantStack<char>::iterator ite = mstack.end();
        std::cout << "Stack elements: ";
        while (it != ite) {
            std::cout << *it << " ";
            ++it;
        }
        std::cout << std::endl;

        std::stack<char> s(mstack);
    }

    return 0;
}