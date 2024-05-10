#pragma once

#include <iostream>

class Prototype
{
  public:
    virtual Prototype *clone() = 0;

    void Print()
    {
        std::cout << x << std::endl;
    }

  private:
    int x = 5;
};

class ConcretePrototype : public Prototype
{
    virtual Prototype *clone() override
    {
        return this;
    }
};
