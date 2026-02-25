// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert 
// Carnet: 12764278
// Carrera del estudiante:Economia e Inteligencia de negocios
// Fecha creación: 25/02/2026

#include <iostream>

using namespace std;

int main() {

    int n;
    float precio;
    float total = 0;
    float iva;
    float totalFinal;

    cout << "Cantidad de productos vendidos: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Precio del producto " << i << ": ";
        cin >> precio;
        total += precio;
    }

    iva = total * 0.13;
    totalFinal = total + iva;

    if (totalFinal > 2500) {
        totalFinal = totalFinal * 0.95;
    }

    cout << "Total de ventas: " << total << endl;
    cout << "IVA (13%): " << iva << endl;
    cout << "Total final a pagar: " << totalFinal << endl;

    return 0;
}