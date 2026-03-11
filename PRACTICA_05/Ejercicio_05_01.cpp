// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri
// Carnet: 12764278
// Fecha creación: 06/03/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double calcularVenta(int n, double &ivaTotal);

int main()
{
    int n;
    double ivaTotal;

    srand(time(NULL));

    cout<<"Ingrese la cantidad de productos vendidos: ";
    cin>>n;

    double total = calcularVenta(n, ivaTotal);

    cout<<"Total de ventas del dia: "<<total<<endl;
    cout<<"IVA a pagar al SIN: "<<ivaTotal<<endl;

    return 0;
}

double calcularVenta(int n, double &ivaTotal)
{
    double precio, total = 0;

    for(int i=1;i<=n;i++)
    {
        precio = 20 + rand()%31; 
        total = total + precio;
    }

    ivaTotal = total * 0.13;

    total = total + ivaTotal;

    if(total > 2500)
    {
        total = total - (total * 0.05);
    }

    return total;
}