#include "factory_method.h"

int main(int argc, char** argv) {
    Creator *creator = new ConcreteCreator();
    Product *product = creator->CreateProduct();
    product->Method();
      
    return 0;
}
