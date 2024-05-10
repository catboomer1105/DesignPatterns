#include "prototype.h"

int main()
{
    Prototype* prototype = new ConcretePrototype();

    prototype->Print();

    Prototype* prototype2 = prototype->clone();

    prototype2->Print();
}