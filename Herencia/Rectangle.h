#pragma once
#include "Shape.h"

class Rectangle : public herencia::Shape {
  private:
    int a,b;
  public:
    Rectangle();
    Rectangle(int,int);
    Rectangle(int,int,int,int);
    std::string draw();
};