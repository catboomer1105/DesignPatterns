#pragma once

#include <iostream>

class AbstractProductA
{
  public:
    virtual void MethodA() = 0;
};

class ConcreteProductA1 : public AbstractProductA
{
  public:
    void MethodA() override
    {
        std::cout << "ConcreteProductA1 MethodA" << std::endl;
    }
};

class ConcreteProductA2 : public AbstractProductA
{
  public:
    void MethodA() override
    {
        std::cout << "ConcreteProductA2 MethodA" << std::endl;
    }
};

class AbstractProductB
{
  public:
    virtual void MethodB() = 0;
};

class ConcreteProductB1 : public AbstractProductB
{
  public:
    void MethodB() override
    {
        std::cout << "ConcreteProductB1 MethodB" << std::endl;
    
    }
};

class ConcreteProductB2 : public AbstractProductB
{
  public:
    void MethodB() override
    {
        std::cout << "ConcreteProductB2 MethodB" << std::endl;
    }
};

class AbstractFactory
{
  public:
    virtual AbstractProductA *CreateProductA() = 0;
    virtual AbstractProductB *CreateProductB() = 0;
};

class ConcreteFactory1 : public AbstractFactory
{
  public:
    AbstractProductA *CreateProductA() override
    {
        return new ConcreteProductA1();
    }

    AbstractProductB *CreateProductB() override
    {
        return new ConcreteProductB1();
    }
};

class ConcreteFactory2 : public AbstractFactory
{
  public:
    AbstractProductA *CreateProductA() override
    {
        return new ConcreteProductA2();
    }

    AbstractProductB *CreateProductB() override
    {
        return new ConcreteProductB2();
    }
};