#ifndef __DEMO1_H__
#define __DEMO1_H__

#include <iostream>

namespace demo1
{
    struct A
    {
        std::string str;
        A() = default;
        A(std::string&& str):str{std::move(str)}{
            puts("move");
        }
        A(const std::string &str) : str{str}
        {
            puts("copy");
        }
        ~A() { puts("~A()"); }
    };
    A foo()
    {
        std::string str = "Hello world......................................";

        return str;
    }
    void run()
    {
        A a = foo();
        puts("====");
    }
}

#endif
