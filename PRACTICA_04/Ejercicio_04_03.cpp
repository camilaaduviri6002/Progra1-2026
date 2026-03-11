// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert 
// Carnet: 12764278
// Fecha creación: 9/03/2026
#include <iostream>
using namespace std;

const double PI = 3.1416;

double volumen(double r,double h);

int main()
{
    double r,h;

    cout<<"Ingrese el radio: ";
    cin>>r;

    cout<<"Ingrese la altura: ";
    cin>>h;

    cout<<"Volumen del cilindro: "<<volumen(r,h);

    return 0;
}

double volumen(double r,double h)
{
    double v;
    v = PI * r * r * h;
    return v;
}