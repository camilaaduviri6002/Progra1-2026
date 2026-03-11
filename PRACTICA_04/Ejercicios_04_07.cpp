// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert 
// Carnet: 12764278
// Fecha creación: 9/03/2026
#include <iostream>
using namespace std;

double distancia(double v,double t);

int main()
{
    double v,t;

    cout<<"Ingrese velocidad: ";
    cin>>v;

    cout<<"Ingrese tiempo: ";
    cin>>t;

    cout<<"Distancia recorrida: "<<distancia(v,t);

    return 0;
}

double distancia(double v,double t)
{
    double d;
    d = v * t;
    return d;
}