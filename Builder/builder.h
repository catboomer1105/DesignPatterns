#pragma once

#include <iostream>
#include <vector>

class Product
{
  public:
    void addPart(std::string part)
    {
        parts.push_back(part);
    }

    void show()
    {
        for (auto part : parts)
        {
            std::cout << part << std::endl;
        }
    }

  private:
    std::vector<std::string> parts;
};

class Builder
{
  public:
    virtual void buildPartA() = 0;
    virtual void buildPartB() = 0;

    virtual Product *getProduct() = 0;
};

class ConcreteBuilder : public Builder
{
  public:
    void buildPartA() override
    {
        product->addPart("Part A");
    }

    void buildPartB() override
    {
        product->addPart("Part B");
    }

    Product *getProduct() override
    {
        return product;
    }

  private:
    Product *product = new Product();
};

class Director
{
  public:
    void setBuilder(Builder *builder)
    {
        this->builder = builder;
    }

    Product *construct()
    {
        builder->buildPartA();
        builder->buildPartB();
        return builder->getProduct();
    }

  private:
    Builder *builder;
};
