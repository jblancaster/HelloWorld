#ifndef HELLO_H
#define HELLO_H

#include <iostream>

class Hello
{
    public:
    Hello();
    ~Hello();
    void greeting();

    private:
    std::string greeting_str;
    
};
#endif