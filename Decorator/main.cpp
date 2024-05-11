#include "decorator.h"

int main()
{
    ConcreteComponent *concreteComponent = new ConcreteComponent();
    
    ConcreteDecoratorA *concreteDecoratorA = new ConcreteDecoratorA();
    ConcreteDecoratorB *concreteDecoratorB = new ConcreteDecoratorB();

    concreteDecoratorA->SetComponent(concreteComponent);
    concreteDecoratorB->SetComponent(concreteDecoratorA);

    concreteDecoratorB->operation();

    delete concreteComponent;
    delete concreteDecoratorA;
    delete concreteDecoratorB;

    return 0;
}