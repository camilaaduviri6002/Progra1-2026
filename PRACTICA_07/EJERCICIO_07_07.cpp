// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert 
// Carnet: 12764278
// Carrera del estudiante: Economia e inteligencia de negocios
// Fecha creación: 06/04/2026
#include <iostream>
using namespace std;

int main() {
    int v[10];
    int i = 0, num;

    while(i < 10) {
        cin >> num;

        if(num < 0) break;

        v[i] = num;
        i++;
    }

    for(int j = 0; j < i; j++) {
        cout << v[j] << " ";
    }

    return 0;
}