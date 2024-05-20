#pragma once
#include "Shape.h"

namespace herencia
{
class Circle : public Shape  {
  private:
    int r;
    //double x; // se enmascara la propiedad Shape::x
  public:
    Circle();
    Circle(int,int,int);
    ~Circle();
};

}