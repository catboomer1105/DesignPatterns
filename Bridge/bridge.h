#pragma once

#include <iostream>

class Implementor
{
  public:
    virtual void OperationImp() = 0;
};

class ConcreteImplementorA : public Implementor
{
  public:
    void OperationImp() override
    {
        std::cout << "ConcreteImplementorA::OperationImp()" << std::endl;
    }
};

class ConcreteImplementorB : public Implementor
{
  public:
    void OperationImp() override
    {
        std::cout << "ConcreteImplementorB::OperationImp()" << std::endl;
    }
};

class Abstraction
{
  public:
    void SetImplementor(Implementor *imp)
    {
        m_pImp = imp;
    }

    virtual void Operation() = 0;

  protected:
    Implementor *m_pImp;
};

class RefinedAbstraction : public Abstraction
{
  public:
    void Operation() override
    {
        m_pImp->OperationImp();
    }
};
