// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert 
// Carnet: 12764278
// Carrera del estudiante:Economia e Inteligencia de negocios
// Fecha creación: 25/02/2026

#include <iostream>

using namespace std;

int main() {

    int a, b;

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    if (a > b) {
        for (int i = a; i >= b; i--) {
            cout << i << " ";
        }
    }
    else {
        for (int i = a; i <= b; i++) {
            cout << i << " ";
        }
    }

    return 0;
}