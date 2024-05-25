#include <iostream>
#include "Hello.h"

Hello::Hello()
{
    std::cout << "Contruct" << std::endl;
    greeting_str = "Hello, World!";
}

Hello::~Hello()
{
    std::cout << "Destroy" << std::endl;
}

void Hello::greeting()
{
    std::cout << greeting_str << std::endl;
}