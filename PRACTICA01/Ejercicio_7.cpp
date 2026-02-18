// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert
// Carnet: 12764278.
// Carrera del estudiante:Economía e inteligencia de negocios
// Fecha creación: 18/02/2026
#include <iostream>
using namespace std;

int main() {
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18 && edad <= 25) {
        cout << "Esta en el rango [18-25]." << endl;
    } else {
        cout << "No esta en el rango [18-25]." << endl;
    }

    return 0;
}
