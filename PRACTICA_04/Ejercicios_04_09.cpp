// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert 
// Carnet: 12764278
// Fecha creación: 9/03/2026
#include <iostream>
using namespace std;

double promedio(double a,double b);

int main()
{
    double n1,n2;

    cout<<"Ingrese dos notas: ";
    cin>>n1>>n2;

    cout<<"Promedio: "<<promedio(n1,n2);

    return 0;
}

double promedio(double a,double b)
{
    double p;
    p = (a + b) / 2;
    return p;
}