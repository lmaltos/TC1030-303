#include <iostream>
#include "RelojD.h"

using namespace std;
void despliegaMenu();

int main() {
    RelojD r;
    int opcion;
    int x;
    do {
        despliegaMenu();
        cin >> opcion;
        switch (opcion) {
            case 1:
                cout << "Hora: ";
                cin >> x;
                r.setHora(x);
                break;
            case 2:
                cout << "Minutos: ";
                cin >> x;
                r.setMinutos(x);
                break;
            case 3:
                cout << "Hora: " << r.getHora() << endl;
                break;
            case 4:
                cout << "Minutos: " << r.getMinutos() << endl;
                break;
            case 5:
                cout << r.Muestra() << endl;
                break;
            default:
                return;
        }
    } while (true);
}

void despliegaMenu() {
    cout << "Seleccione una opcion:" << endl
    << "1: setHora" << endl
    << "2: setMinutos" << endl
    << "3: getHora" << endl
    << "4: getMunutos" << endl
    << "5: muestra" << endl
    << "6: salir" << endl;
}