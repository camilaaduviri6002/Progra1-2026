// PRÁCTICA ADICIONAL 2T
// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri QUIsbert 
// Fecha creación: 11/05/2026

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int SUCURSALES = 4;
const int DIAS = 7;

void cargarVentas(double matriz[SUCURSALES][DIAS]) {
    for (int i = 0; i < SUCURSALES; ++i)
    {
        for (int j = 0; j < DIAS; ++j)
        {
            matriz[i][j] = ( rand() % (999 - 100 + 1) ) + 100; 
        }
    }
}
void mostrarMatrizVentas( double matriz[SUCURSALES][DIAS]) {
    cout << "Matriz de Ventas:" << endl;
    
    for (int i = 0; i < SUCURSALES; ++i) 
    {
        cout << "Sucursal " << i + 1 << ": ";
        for (int j = 0; j < DIAS; ++j)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
void VentasPorSucursal(const double matriz[SUCURSALES][DIAS]) {
    cout << "    TOTAL DE VENTAS POR SUCURSAL    " << endl;
    for (int i = 0; i < SUCURSALES; ++i) 
    {
        double totalSucursal = 0;
        for (int j = 0; j < DIAS; ++j) 
        {
            totalSucursal = totalSucursal + matriz[i][j];
        }
        cout << "Sucursal " << i + 1 << ": " << totalSucursal << endl;
    }
}

void VentasPorDia(const double matriz[SUCURSALES][DIAS])
{
    cout << "    TOTAL DE VENTAS POR DIA     " << endl;
    for (int j = 0; j < DIAS; ++j) 
    {
        double totalDia = 0;
        for (int i = 0; i < SUCURSALES; ++i) 
        {
            totalDia += matriz[i][j];
        }
        cout <<"DIA " << j +1 << " "<< totalDia<< endl;

    }
}

int main() 
{
    srand(time(0));
    system("cls");
    double ventas[SUCURSALES][DIAS];

    cargarVentas(ventas);
    mostrarMatrizVentas(ventas);
    VentasPorSucursal(ventas);
    VentasPorDia(ventas);

    return 0;
}