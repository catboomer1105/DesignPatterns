#include <iostream>
#include "abstract_factory.h"

int main(int argc, char** argv) {
    AbstractFactory *factory1 = new ConcreteFactory1();
    AbstractProductA *productA1 = factory1->CreateProductA();
    productA1->MethodA();
    AbstractProductB *productB1 = factory1->CreateProductB();
    productB1->MethodB();

    std::cout << std::endl;

    AbstractFactory *factory2 = new ConcreteFactory2();
    AbstractProductA *productA2 = factory2->CreateProductA();
    productA2->MethodA();
    AbstractProductB *productB2 = factory2->CreateProductB();
    productB2->MethodB();
    return 0;
}
