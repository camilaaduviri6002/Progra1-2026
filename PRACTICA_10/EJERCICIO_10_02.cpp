// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert
// Carnet: 12764278
// Carrera del estudiante: Economia e inteligencia de negocios
// Fecha creación: 15/04/2026

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void inicializarInventario(int bodega[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            bodega[i][j] = rand() % 101; 
        }
    }
}
void balancearCarga(int bodega[3][3], int filaProducto, int &totalTransferido) {
    
    if (bodega[filaProducto][0] > 80) {
        int excedente = bodega[filaProducto][0] - 80;
        
        bodega[filaProducto][0] = 80;      
        bodega[filaProducto][1] += excedente; 
        
        totalTransferido += excedente;       
    }
}


void mostrarReporte(const vector<string> &nombres, int bodega[3][3]) {
    cout << "\n--- INVENTARIO DE BODEGAS ---" << endl;
    cout << "Producto\tD1\tD2\tD3" << endl;
    cout << "------------------------------------" << endl;
    for (int i = 0; i < nombres.size(); i++) {
        cout << nombres[i] << "\t\t";
        for (int j = 0; j < 3; j++) {
            cout << bodega[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    srand(time(0)); 

    vector<string> productos = {"Papas", "Arroz", "Leche"};
    int bodega[3][3];
    int acumuladoTransferencias = 0;

    inicializarInventario(bodega);

    for (int i = 0; i < 3; i++) {
        balancearCarga(bodega, i, acumuladoTransferencias);
    }

    mostrarReporte(productos, bodega);

    cout << "\nTotal de unidades movidas entre depositos: " << acumuladoTransferencias << endl;

    return 0;
}