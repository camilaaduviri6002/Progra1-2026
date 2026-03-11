// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert 
// Carnet: 12764278
// Fecha creación: 9/03/2026
#include <iostream>
using namespace std;

int mayor(int a,int b,int c);

int main()
{
    int a,b,c;

    cout<<"Ingrese tres numeros: ";
    cin>>a>>b>>c;

    cout<<"El mayor es: "<<mayor(a,b,c);

    return 0;
}

int mayor(int a,int b,int c)
{
    int m = a;

    if(b > m)
        m = b;

    if(c > m)
        m = c;

    return m;
}