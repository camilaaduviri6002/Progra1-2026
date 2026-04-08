
#include <iostream>
using namespace std;

double CalcularPrecioTotal(double precio, double impuesto = 0.13)
{
    return precio + (precio * impuesto);
}

int main()
{
    double precio, impuesto;
    char opcion;

    cout << "Ingrese precio: ";
    cin >> precio;

    cout << "Desea ingresar impuesto : ";
    cin >> opcion;

    if (opcion == 's')
    {
        cout << "Ingrese impuesto en decimales: ";
        cin >> impuesto;
        cout << "Total: " << CalcularPrecioTotal(precio, impuesto);
    }
    else
    {
        cout << "Total: " << CalcularPrecioTotal(precio);
    }

    return 0;
}