#pragma once

#include <iostream>

class Target{
    public:
    virtual void request()
    {
        std::cout << "simple request" << std::endl;
    }
};

class Adaptee{
    public:
    void specificRequest()
    {
        std::cout << "specific request" << std::endl;
    }
};

class ClassAdapter : public Target, private Adaptee{
    public:
    void request()
    {
        specificRequest();
    }
};

class ObjectAdapter : public Target{
    private:
    Adaptee* adaptee;
    
    public:
    ObjectAdapter(Adaptee* adaptee)
    {
        this->adaptee = adaptee;
    }
    void request()
    {
        adaptee->specificRequest();
    }
};