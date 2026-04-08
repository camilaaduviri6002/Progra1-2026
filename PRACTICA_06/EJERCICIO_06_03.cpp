// Materia: Programación I, Paralelo 4
// Autor:Camila Aduviri Quisbert 
// Carnet: 12764278
// Carrera del estudiante:Economia e inteligencia de negocios 
// Fecha creación: 06/04/2026

#include <iostream>
using namespace std;

void ModificarValores(int a, int &b)
{
    a = a * 2;
    b = b + 10;
}

int main()
{
    int x, y;

    cout << "Ingrese primer numero: ";
    cin >> x;
    cout << "Ingrese segundo numero: ";
    cin >> y;

    ModificarValores(x, y);

    cout << "Valor (por valor): " << x << endl;
    cout << "Valor (por referencia): " << y << endl;

    return 0;
}