// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert 
// Carnet: 12764278
// Carrera del estudiante: Economia e inteligencia de negocios
// Fecha creación: 06/04/2026
#include <iostream>
using namespace std;

int main() {
    int v1[5], v2[5], v3[5];

    for(int i = 0; i < 5; i++) cin >> v1[i];
    for(int i = 0; i < 5; i++) cin >> v2[i];

    for(int i = 0; i < 5; i++) {
        v3[i] = v1[i] + v2[i];
        cout << v3[i] << " ";
    }

    return 0;
}
