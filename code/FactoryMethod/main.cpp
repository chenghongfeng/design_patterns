#include "Factory.h"
#include "ConcreteFactory.h"
#include "ConcreteFactory2.h"
#include "ConcreteProduct2.h"
#include "Product.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	Factory * fc = new ConcreteFactory();
	Product * prod = fc->factoryMethod();
	prod->use();

	Factory *f2 = new ConcerteFactory2();
	Product * prod2 = f2->factoryMethod();
	prod2->use();

	delete f2;
	delete prod2;
	
	delete fc;
	delete prod;
	
	return 0;
}
