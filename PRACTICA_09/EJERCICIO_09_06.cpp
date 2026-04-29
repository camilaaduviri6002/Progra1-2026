// Materia: Programación I, Paralelo 4 
// Autor: Camila Aduviri Quisbert 
// Fecha creación: 13/04/2026 
// Número de ejercicio: 6
#include <iostream>
using namespace std;

void leerMatriz(int m[10][10], int n)
{
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Matriz[" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
    }
}

void intercambiarFilas(int m[10][10], int n) 
{
    for(int j = 0; j < n; j++) {
        int aux = m[0][j];
        m[0][j] = m[n-1][j];
        m[n-1][j] = aux;
    }
}

void mostrarMatriz(int m[10][10], int n)
{
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() 
{
    int n, matriz[10][10];
    cout << "Ingrese el orden n de la matriz: "; cin >> n;
    leerMatriz(matriz, n);
    intercambiarFilas(matriz, n);
    cout << "Matriz resultante:" << endl;
    mostrarMatriz(matriz, n);
    return 0;
}