#pragma once
#include <iostream>

namespace herencia {

class Shape {
  private:
    int x;
    int y;
  public:
    Shape();
    Shape(int,int);
    virtual ~Shape();
    virtual std::string draw();

    int getValueX();
    int getValueY();
};

 }