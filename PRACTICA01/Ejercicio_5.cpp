// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert
// Carnet: 12764278.
// Carrera del estudiante:Economía e inteligencia de negocios
// Fecha creación: 18/02/2026
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float cat1, cat2, hipotenusa;

    cout << "Ingrese primer cateto: ";
    cin >> cat1;

    cout << "Ingrese segundo cateto: ";
    cin >> cat2;

    hipotenusa = sqrt(cat1 * cat1 + cat2 * cat2);

    cout << "La hipotenusa es: " << hipotenusa << endl;

    return 0;
}
