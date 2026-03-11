// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert 
// Carnet: 12764278
// Fecha creación: 9/03/2026
#include <iostream>
using namespace std;

bool esPar(int n);

int main()
{
    int n;

    cout<<"Ingrese un numero: ";
    cin>>n;

    if(esPar(n))
        cout<<"El numero es par";
    else
        cout<<"El numero es impar";

    return 0;
}

bool esPar(int n)
{
    if(n % 2 == 0)
        return true;
    else
        return false;
}