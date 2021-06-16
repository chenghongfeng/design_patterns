#ifndef CONCRETE_PRODUCT2_H
#define CONCRETE_PRODUCT2_H



#include "Product.h"
#include <iostream>
using namespace std;

class ConcreteProduct2:public Product
{
private:
    /* data */
public:
    ConcreteProduct2(/* args */);
    ~ConcreteProduct2();
    virtual void use()
    {
        cout << "use prodect 2" << endl;
    }
};

ConcreteProduct2::ConcreteProduct2(/* args */)
{
}

ConcreteProduct2::~ConcreteProduct2()
{
}

#endif // !CONCRETE_PRODUCT2_H