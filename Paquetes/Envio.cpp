#include "Envio.h"

using namespace std;
Persona::Persona() {
    nombre = "Juan Perez";
    direccion = "S/N";
    ciudad = "Mty";
    estado = "NL";
    CP = 0;
}

Persona::Persona(string _nombre,string _direccion,string _ciudad,string _estado,int _CP) {
    nombre = _nombre;
    direccion = _direccion;
    ciudad = _ciudad;
    estado = _estado;
    CP = _CP;
}

Envio::Envio(Persona &rem,Persona &dest) : remitente(rem) , destinatario(dest) {
    //remitente = rem; hacerlo de esta manera implica usar primero el constuctor default
}

Envio::Envio(string _nombre1,string _direccion1,string _ciudad1,string _estado1
,int _CP1,string _nombre2,string _direccion2,string _ciudad2,string _estado2,int _CP2)
 : remitente(_nombre1,_direccion1,_ciudad1,_estado1,_CP1)
 , destinatario(_nombre2,_direccion2,_ciudad2,_estado2,_CP2) {
    
}

double Envio::calculaCosto() {
    return 100.0;
}