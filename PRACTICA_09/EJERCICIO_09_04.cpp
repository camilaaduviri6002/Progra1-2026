// Materia: Programación I, Paralelo 4 
// Autor: Camila Aduviri Quisbert 
// Fecha creación: 13/04/2026 
// Número de ejercicio: 4
#include <iostream>
#include <iomanip> // Para que la matriz se vea ordenada

using namespace std;

// Función que genera y muestra la matriz según el patrón
void generarYMostrarMatriz(int n) {
    int matriz[20][20];
    int inicioFila = 1;

    for (int i = 0; i < n; i++) {
        int valorActual = inicioFila;
        for (int j = 0; j < n; j++) {
            matriz[i][j] = valorActual;
            cout << setw(4) << matriz[i][j]; // Imprime con espacio de 4 caracteres
            valorActual++;
        }
        inicioFila += 2; // El inicio de la siguiente fila salta al siguiente impar
        cout << endl;
    }
}

int main() {
    int n;
    cout << "--- GENERADOR DE MATRIZ (PATRON IMPAR) ---" << endl;
    cout << "Ingrese el orden n de la matriz: ";
    cin >> n;

    if (n > 0 && n <= 20) {
        generarYMostrarMatriz(n);
    } else {
        cout << "Por favor, ingrese un numero entre 1 y 20." << endl;
    }

    return 0;
}