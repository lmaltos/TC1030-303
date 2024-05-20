#include "Shape.h"
#include "Circle.h"

using namespace herencia;

int main() {
    Shape fig,fig1(2,3);
    Circle c, d(2,3,4);
    std::cout << "fig: " << fig.draw() << std::endl;
    std::cout << "fig1: "  << fig1.draw() << std::endl;
    std::cout << "c: "  << c.draw() << std::endl;
    std::cout << "d: "  << d.draw() << std::endl;
}