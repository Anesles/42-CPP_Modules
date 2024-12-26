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
    return 0;
}