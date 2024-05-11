#pragma once

#include <iostream>

class Component
{
  public:
    virtual void operation() = 0;
};

class ConcreteComponent : public Component
{

  public:
    void operation() override
    {
        std::cout << "ConcreteComponent operation" << std::endl;
    }
};

class Decorator : public Component
{
  public:
    void SetComponent(Component *component)
    {
        component_ = component;
    }

    void operation() override
    {
        if (component_ != nullptr)
        {
            component_->operation();
        }
    }

  protected:
    Component *component_;
};

class ConcreteDecoratorA : public Decorator
{

  public:
    void operation() override
    {
        Decorator::operation();
        addedState_ = "New State";
        std::cout << "ConcreteDecoratorA operation" << std::endl;
    }

    private:
        std::string addedState_;
};

class ConcreteDecoratorB : public Decorator
{

  public:
    void operation() override
    {
        Decorator::operation();
        addedBehavior();
        std::cout << "ConcreteDecoratorB operation" << std::endl;
    }

    private:
        void addedBehavior()
        {
            std::cout << "Added Behavior" << std::endl;
        }
};
