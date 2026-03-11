// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert 
// Carnet: 12764278
// Fecha creación: 9/03/2026
#include <iostream>
using namespace std;

int contar(int n);

int main()
{
    int n;

    cout<<"Ingrese un numero: ";
    cin>>n;

    cout<<"Cantidad de digitos: "<<contar(n);

    return 0;
}

int contar(int n)
{
    int c = 0;

    while(n > 0)
    {
        n = n / 10;
        c++;
    }

    return c;
}