#include "Envio.h"
#include "Paquete.h"
#include <iostream>

using namespace std;

int main() {
    Persona remitente,destinatario("Sergio Lopez", "Av. Siempre Viva", "Sprinfield", "Utha", 666);
    Paquete p(remitente,destinatario,5,6,7,12.5,13.7);
    Paquete *q = &p;
    cout << "Costo del Paquete: " << p.calculaCosto() << endl;
    cout << "Costo del Paquete: " << q->calculaCosto() << endl;
    return 0;
}