// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert 
// Carnet: 12764278
// Fecha creación: 9/03/2026
#include <iostream>
using namespace std;

void convertir(double bs,double tcOficial,double tcParalelo);

int main()
{
    double bs,oficial,paralelo;

    cout<<"Ingrese monto en bolivianos: ";
    cin>>bs;

    cout<<"Ingrese tipo de cambio oficial: ";
    cin>>oficial;

    cout<<"Ingrese tipo de cambio paralelo: ";
    cin>>paralelo;

    convertir(bs,oficial,paralelo);

    return 0;
}

void convertir(double bs,double tcOficial,double tcParalelo)
{
    double d1,d2;

    d1 = bs / tcOficial;
    d2 = bs / tcParalelo;

    cout<<"Dolares al cambio oficial: "<<d1<<endl;
    cout<<"Dolares al cambio paralelo: "<<d2<<endl;
}