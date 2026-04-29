// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert 
// Carnet: 12764278
// Carrera del estudiante: Economia e inteligencia de negocios
// Fecha creación: 06/04/2026
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese tamaño: ";
    cin >> n;

    int v1[100], v2[100], v3[100];

    for(int i = 0; i < n; i++) 
    {
        cin >> v1[i];
    }

    for(int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    for(int i = 0; i < n; i++)
    {
        v3[i] = v1[i] * v2[i];
        cout << v3[i] << " ";
    }

    return 0;
}