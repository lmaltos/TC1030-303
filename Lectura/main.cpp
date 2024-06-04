#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream f("Ejemplo.txt");
    string l;
    string tipo;
    int idVideo;
    string titulo;
    string genero;
    int duracion;
    double calificacion;
    string tituloSerie;
    int episodio;
    int temporada;
    
    getline(f,l); // lee la primera linea de titulos
    do {
        f >> tipo >> idVideo >> titulo >> genero >> duracion >> calificacion;
        if (tipo == "e") {
            // leer TituloSerie episodio temporada
            f >> tituloSerie >> episodio >> temporada;
        }
        cout << titulo << endl;
    } while (!f.eof());
    return 0;
}