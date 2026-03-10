// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert 
// Carnet: 12764278
// Carrera del estudiante:Economia e Inteligencia de negocios
// Fecha creación: 24/02/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    int numeroSecreto, numeroUsuario;
    int intentos = 0;

    srand(time(0));

    numeroSecreto = rand() % 100 + 1;

    cout << "Adivina el numero entre 1 y 100" << endl;

    do {
        cout << "Ingresa tu numero: ";
        cin >> numeroUsuario;

        intentos++;

        if (numeroUsuario > numeroSecreto) {
            cout << "El numero es menor" << endl;
        }
        else if (numeroUsuario < numeroSecreto) {
            cout << "El numero es mayor" << endl;
        }
        else {
            cout << "Correcto!" << endl;
        }

    } while (numeroUsuario != numeroSecreto);

    cout << "Te tomo " << intentos << " intentos." << endl;

    return 0;
}