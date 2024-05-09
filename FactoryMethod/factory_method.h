#pragma once

#include <iostream>

class Product
{
  public:
    virtual void Method() = 0;
};

class ConcreteProduct : public Product
{
  public:
    void Method() override
    {
        std::cout << "ConcreteProduct Method" << std::endl;
    }
};

class Creator
{
  public:
    virtual Product *CreateProduct() = 0;
};

class ConcreteCreator : public Creator
{
  public:
    Product *CreateProduct() override
    {
        return new ConcreteProduct();
    }
};
