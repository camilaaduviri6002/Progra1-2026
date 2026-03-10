// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert 
// Carnet: 12764278
// Carrera del estudiante:Economia e Inteligencia de negocios
// Fecha creación: 25/02/2026

#include <iostream>

using namespace std;

int main() {

    int numero;
    int suma = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            suma += i;
        }
    }

    if (suma == numero) {
        cout << "Es un numero perfecto";
    }
    else {
        cout << "No es un numero perfecto";
    }

    return 0;
}