#ifndef __DEMO2_H__
#define __DEMO2_H__

#include <iostream>
#include <vector>

namespace demo2
{
    struct X
    {
        X() { std::cout << "X()" << std::endl; }
        X(const X &) { std::cout << "X(const X&)" << std::endl; }
        X(X &&) { std::cout << "X(X&&)" << std::endl; }
        ~X() { std::cout << "~X()"<< std::endl; }
    };

    std::vector<X> func()
    {
        std::vector<X> v;
        X x;
        v.push_back(x);

        std::cout << &v << std::endl;
        std::cout << "------------------"<< std::endl;
        return v;
    }

    void run()
    {
        std::vector<X> result = func();
        std::cout << &result << std::endl;
    }
}

#endif
