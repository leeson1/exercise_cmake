#ifndef __DEMO1_H__
#define __DEMO1_H__

#include <iostream>
#include <format>

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
        std::cout << std::format("{}: {}\n", (void*)str.c_str(), str.c_str());
        return str;
    }
    void run()
    {
        A a = foo();
        puts("====");
        std::cout << std::format("{}: {}\n", (void*)a.str.c_str(), a.str.c_str());
    }
}

#endif