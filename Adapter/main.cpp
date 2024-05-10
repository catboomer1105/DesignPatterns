#include "adapter.h"

int main()
{
    Target* target = new ClassAdapter();
    target->request();
    
    Adaptee* adaptee = new Adaptee();
    target = new ObjectAdapter(adaptee);
    target->request();
    
    return 0;
}