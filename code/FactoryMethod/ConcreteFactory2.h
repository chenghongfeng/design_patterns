#ifndef CONCRETE_FACTORY2_H
#define CONCRETE_FACTORY2_H


#include "Factory.h"
#include "Product.h"
#include "ConcreteProduct2.h"

class ConcerteFactory2 :public Factory
{
private:
    /* data */
public:
    ConcerteFactory2(/* args */);
    ~ConcerteFactory2();
    Product *factoryMethod()
    {
        return new ConcreteProduct2();
    }
};

ConcerteFactory2::ConcerteFactory2(/* args */)
{
}

ConcerteFactory2::~ConcerteFactory2()
{
}


#endif // CONCRETE_FACTORY2_H