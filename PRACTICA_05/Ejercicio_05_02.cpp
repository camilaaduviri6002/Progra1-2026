// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri
// Carnet: 12764278
// Fecha creación: 06/03/2026
#include <iostream>
using namespace std;

double calcularSueldo(double sueldoBase, double precioProducto, double &comision);

int main()
{
    int n;
    double sueldoBase, precioProducto;

    cout<<"Ingrese cantidad de vendedoras: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<"\nVendedora "<<i<<endl;

        cout<<"Ingrese sueldo basico segun antiguedad: ";
        cin>>sueldoBase;

        cout<<"Ingrese precio promedio del producto: ";
        cin>>precioProducto;

        double comision;
        double sueldoTotal = calcularSueldo(sueldoBase, precioProducto, comision);

        cout<<"Comision extra: "<<comision<<endl;
        cout<<"Sueldo total a pagar: "<<sueldoTotal<<endl;
    }

    return 0;
}

double calcularSueldo(double sueldoBase, double precioProducto, double &comision)
{
    int ventas = 10;

    double totalVentas = ventas * precioProducto;

    comision = totalVentas * 0.10;

    double sueldoTotal = sueldoBase + comision;

    return sueldoTotal;
}