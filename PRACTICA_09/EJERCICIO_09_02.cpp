// Materia: Programación I, Paralelo 4 
// Autor: Camila Aduviri Quisbert 
// Fecha creación: 13/04/2026 
// Número de ejercicio: 2
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

void llenarAleatorio(float m[10][10], int n, int a, int b) 
{
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            m[i][j] = a + rand() % (b - a + 1);
}

void procesarDatos(float m[10][10], int n) 
{
    float sumaCol = 0, prodFila = 1, mayor = m[0][0];
    int fM = 0, cM = 0;

    for(int i=0; i<n; i++) sumaCol += m[i][n-1];
    for(int j=0; j<n; j++) prodFila *= m[n-1][j];

    float sumaTotal = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            sumaTotal += m[i][j];
            if(m[i][j] > mayor) { mayor = m[i][j]; fM = i; cM = j; }
        }
    }

    float media = sumaTotal / (n * n);
    float varianza = 0;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            varianza += pow(m[i][j] - media, 2);
    
    float desv = sqrt(varianza / (n * n));

    cout << "Suma ultima col: " << sumaCol << endl;
    cout << "Prod ultima fila: " << prodFila << endl;
    cout << "Mayor: " << mayor << " en posicion [" << fM << "][" << cM << "]" << endl;
    cout << "Desviacion estandar: " << desv << endl;
}

int main()
 {
    srand(time(0));
    int n, a, b;
    float matriz[10][10];
    cout << "N, A y B: "; cin >> n >> a >> b;
    llenarAleatorio(matriz, n, a, b);
    procesarDatos(matriz, n);
    return 0;
}