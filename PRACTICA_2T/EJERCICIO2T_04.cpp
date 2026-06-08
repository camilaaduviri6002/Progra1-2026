// PRÁCTICA ADICIONAL 2T
// Materia: Programación I, Paralelo 4
// Autor:Camila Aduviri Quisbert 
// Fecha creación: 11/05/2026

#include <iostream>
#include <cstdlib>
#include <ctime>    
#include <cmath>
using namespace std;

void generar(int m[0][100], int n, int a, int b) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            m[i][j] = ( rand() % (b - a + 1) ) + a; 
        }
    }
}
void mostrar(int m[0][100], int n) {
    cout << " Matriz generada:" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            cout << m[i][j] << "  ";
        }
        cout << endl;
    }
}
int sumaColumna(int m[0][100], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += m[i][0];       
    }
    return suma;
}

int productoFila(int m[0][100], int n) {
    int p = 1;
    for (int j = 0; j < n; j++) {
        p *= m[0][j];         
    }
    return p;
}
void menor(int m[0][100], int n) {
    int min = m[0][0], fi = 0, co = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (m[i][j] < min) {
                min = m[i][j];
                fi  = i;
                co  = j;
            }
        }
    }
    cout<<"Menor valor: "<< min<<" en posicion ["<<fi<<"]["<<co<<"]"<<endl;
}

int main() 
{
    srand(time(0));      

    int n, a, b, m[100][100];
    system("cls");

    cout << "Ingrese el tamanio de la matriz: ";
    cin  >> n;

    cout << "Ingrese el valor minimo (A): ";
    cin  >> a;

    cout << "Ingrese el valor maximo (B): ";
    cin  >> b;

    generar(m, n, a, b);
    mostrar(m, n);

    cout << "Suma de la primera columna  : " << sumaColumna(m, n) << endl;
    cout << "Producto de la primera fila : " << productoFila(m, n)  << endl;
    menor(m, n);

    return 0;
}