#pragma once

#include <iostream>

// Meyers Singleton
class Singleton
{
  public:
    static Singleton &GetInstance()
    {
        static Singleton instance;
        return instance;
    }

    void Method()
    {
        std::cout << "Singleton Method" << std::endl;
    }
};