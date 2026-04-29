// Materia: Programación I, Paralelo 4 
// Autor: Camila Aduviri Quisbert 
// Fecha creación: 13/04/2026 
// Número de ejercicio: 5
#include <iostream>

using namespace std;

// Función para leer cualquier matriz indicando sus dimensiones
void leerMatriz(int m[10][10], int filas, int columnas, char nombre) {
    cout << "Datos para Matriz " << nombre << " (" << filas << "x" << columnas << "):" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << nombre << "[" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
    }
}

// Función que realiza la multiplicación: A(NxM) * B(MxN) = C(NxN)
void multiplicarMatrices(int A[10][10], int B[10][10], int N, int M) {
    int C[10][10] = {0}; // Inicializar en cero es vital para la suma acumulada

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < M; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Mostrar el resultado
    cout << "\nMatriz Resultante C (" << N << "x" << N << "):" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    int matrizA[10][10], matrizB[10][10];

    cout << "--- MULTIPLICACION DE MATRICES ---" << endl;
    cout << "Ingrese el valor de N (filas de A / columnas de B): "; cin >> n;
    cout << "Ingrese el valor de M (columnas de A / filas de B): "; cin >> m;

    leerMatriz(matrizA, n, m, 'A');
    leerMatriz(matrizB, m, n, 'B');

    multiplicarMatrices(matrizA, matrizB, n, m);

    return 0;
}