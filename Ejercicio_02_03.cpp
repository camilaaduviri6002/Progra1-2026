// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert 
// Carnet: 12764278
// Carrera del estudiante:Economia e Inteligencia de negocios
// Fecha creación: 22/02/2026

#include <iostream>

using namespace std;
int main()
{
    int sum=0, n;
    cout << "Ingrese un numero: ";
    cin >> n;

    for (int  i =1; i <= n; i++)
    {
        sum += i;
    }
    
    cout << "resultado: " << sum << endl;

    return 0;
}