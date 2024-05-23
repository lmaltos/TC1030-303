#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <list>

using namespace herencia;

int main2() {
    Shape fig,fig1(2,3);
    Circle c, d(2,3,4);
    Rectangle r, r1(4,3,2,1);
    Shape* p;
    int *q;
    std::list<Shape*> listaEstatica;
    // agregamos elementos
    listaEstatica.push_back(&fig);
    listaEstatica.push_back(&fig1);
    listaEstatica.push_back(&c);
    listaEstatica.push_back(&d);
    listaEstatica.push_back(&r);
    listaEstatica.push_back(&r1);

    p = &fig; // la direccion de memoria de fig, se almacena en el pointer p
    q = (int*)p;
    for (std::list<Shape*>::iterator it = listaEstatica.begin(); it != listaEstatica.end(); it++) {
        p = *it;
        std::cout << "p: " << p->draw() << std::endl;
    }
    std::cout << "q: " << *q << std::endl; // *q regresa el valor al que apunta el pointer q

}

void llenaLista(std::list<Shape*> &,int);

int main() {
    std::list<Shape*> listaDinamica;
    Shape* p;
    llenaLista(listaDinamica,50);
    for (std::list<Shape*>::iterator it = listaDinamica.begin(); it != listaDinamica.end(); it++) {
        p = *it;
        std::cout << "p: " << p->draw() << std::endl;
    }
    for (std::list<Shape*>::iterator it = listaDinamica.begin(); it != listaDinamica.end(); it++) {
        p = *it;
        delete p;
    }
}

void llenaLista(std::list<Shape*> &listaDinamica, int n) {
    Shape *p;
    int a;
    for (int i = 0; i < n; i++) {
        a = rand() % 3;
        switch (a)
        {
        case 0:
            p = new Shape(rand() % 10, rand() % 10);
            break;
        case 1:
            p = new Circle(rand() % 10, rand() % 10, rand() % 5);
            break;
        case 2:
            p = new Rectangle(rand() % 10, rand() % 10,rand() % 10, rand() % 10);
        default:
            break;
        }
        listaDinamica.push_back(p);
    }
}