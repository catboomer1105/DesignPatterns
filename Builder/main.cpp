#include "builder.h"

int main()
{
    Director director;
    Builder* builder = new ConcreteBuilder();

    director.setBuilder(builder);
    director.construct();

    Product *product = builder->getProduct();
    product->show();

    return 0;
}