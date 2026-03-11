// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert 
// Carnet: 12764278
// Fecha creación: 9/03/2026
#include <iostream>
using namespace std;

int suma(int n);

int main()
{
    int n;

    cout<<"Ingrese N: ";
    cin>>n;

    cout<<"La suma es: "<<suma(n);

    return 0;
}

int suma(int n)
{
    int s = 0;

    for(int i=1;i<=n;i++)
    {
        s = s + i;
    }

    return s;
}