#include "bridge.h"

int main()
{
    Abstraction *abstraction = new RefinedAbstraction();
    abstraction->SetImplementor(new ConcreteImplementorA());
    abstraction->Operation();

    abstraction->SetImplementor(new ConcreteImplementorB());
    abstraction->Operation();
    
    return 0;
}