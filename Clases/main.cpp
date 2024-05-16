#include "Rectangulo.h"
#include <iostream>

using namespace std;

int main() {
    Rectangulo rect,rect1;
    double a,b,c,d;
    rect.setLargo(10);
    rect.setAncho(20);
    a = rect.calcularArea();
    rect1.setLargo(5);
    rect1.setAncho(8);
    b = rect1.calcularArea();

    cout << "El area de rect es " << a << endl;
    cout << rect.str() << endl;
    
    cout << "El area de rect1 es " << b << endl;
    cout << rect1.str() << endl;
    
    // Agregamos los getters
    c = rect.getLargo();
    d = rect.getAncho();
}