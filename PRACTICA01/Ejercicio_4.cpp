// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert
// Carnet: 12764278.
// Carrera del estudiante:Economía e inteligencia de negocios
// Fecha creación: 17/02/2026
#include <iostream>

using namespace std;

int main()
{
    float practica,teoria, participacion,NF;

    cout << "Ingrese nota practica: ";
    cin>> practica;
    cout << "Ingrese nota teorica: ";
    cin >> teoria;
    cout << "Ingrese nota de participacion: ";
    cin >> participacion;

 if (practica >= 0 && teoria >= 0 && participacion >= 0) {
        NF = practica * 0.30 + teoria * 0.60 + participacion * 0.10;
        cout << "La nota final es: " << NF << endl;
    } else {
        cout << " Notas invalidas." << endl;
    }

    return 0;

}