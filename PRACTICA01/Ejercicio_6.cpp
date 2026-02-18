// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert
// Carnet: 12764278.
// Carrera del estudiante:Economía e inteligencia de negocios
// Fecha creación: 18/02/2026

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Ingrese un numero entero: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "El numero es PAR." << endl;
    } else {
        cout << "El numero es IMPAR." << endl;
    }

    return 0;
}
