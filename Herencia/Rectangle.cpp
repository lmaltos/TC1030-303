#include "Rectangle.h"

Rectangle::Rectangle()
 : Shape(1,1) {
    a = b = 1;
}

Rectangle::Rectangle(int x,int y)
 : Shape (x,y) {
    a = x;
    b = y;
}

Rectangle::Rectangle(int x, int y, int _a, int _b)
 : Shape(x,y) {
    a = _a;
    b = _b;
}

std::string Rectangle::draw() {
    return "Soy un rectangulo";
}

void Rectangle::metodo1(int i, double d) {
    std::cout << "Rectangle::metodo1()" << std::endl;
}

double Rectangle::calcularArea() {
    return a * b;
}