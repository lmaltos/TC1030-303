#pragma once
#include "Circle.h"

//using  namespace herencia;

class Cilinder : public herencia::Circle {
  private:
    int h;
  public:
    Cilinder();
    Cilinder(int,int,int,int);
    ~Cilinder();
    std::string draw();
    double calcularVolumen();
};
