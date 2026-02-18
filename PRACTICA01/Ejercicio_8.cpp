// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert
// Carnet: 12764278.
// Carrera del estudiante:Economía e inteligencia de negocios
// Fecha creación: 18/02/2026

#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4;

    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    cout << "Ingrese el tercer numero: ";
    cin >> n3;

    cout << "Ingrese el cuarto numero: ";
    cin >> n4;

    if (n4 == n1) {
        cout << "El numero coincide con el primero." << endl;
    }
    else if (n4 == n2) {
        cout << "El numero coincide con el segundo." << endl;
    }
    else if (n4 == n3) {
        cout << "El numero coincide con el tercero." << endl;
    }
    else {
        cout << "El numero no coincide con ninguno." << endl;
    }

    return 0;
}
