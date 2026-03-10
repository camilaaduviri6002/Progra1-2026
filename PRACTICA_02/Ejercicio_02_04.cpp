// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert 
// Carnet: 12764278
// Carrera del estudiante:Economia e Inteligencia de negocios
// Fecha creación: 24/02/2026

#include <iostream>

using namespace std;

int main()
{
    int sumaFactorial=0, factorial=1, n;

    cout << "Ingrese un numero para calcular su factorial: ";
    cin >> n;

    for (int  i = 1; i <= n ; i++)
    {
        factorial = factorial * i;
        sumaFactorial += factorial;
    
    }
        cout << "Suma de sus factoriales: " << sumaFactorial << endl;
    return 0;
}