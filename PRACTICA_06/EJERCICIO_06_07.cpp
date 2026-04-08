// Materia: Programación I, Paralelo 4
// Autor:Camila Aduviri Quisbert 
// Carnet: 12764278
// Carrera del estudiante:Economia e inteligencia de negocios 
// Fecha creación: 06/04/2026

#include <iostream>
using namespace std;

void agregarNota(double &suma, int &contador, double nota)
{
    suma += nota;
    contador++;
}

int main()
{
    double suma = 0, nota;
    int contador = 0, n;

    cout << "Cuantas notas desea ingresar: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese nota: ";
        cin >> nota;
        agregarNota(suma, contador, nota);
    }

    cout << "Promedio: " << suma / contador << endl;

    return 0;
}