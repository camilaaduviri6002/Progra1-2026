// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert 
// Carnet: 12764278
// Carrera del estudiante: Economia e inteligencia de negocios
// Fecha creación: 06/04/2026

#include <iostream>
using namespace std;

int main() {
    double voltios[9] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};

    int k = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << voltios[k] << " ";
            k++;
        }
        cout << endl;
    }

    return 0;
}