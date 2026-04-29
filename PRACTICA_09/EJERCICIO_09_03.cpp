// Materia: Programación I, Paralelo 4 
// Autor: Camila Aduviri Quisbert 
// Fecha creación: 13/04/2026 
// Número de ejercicio: 3
#include <iostream>
using namespace std;

void analizarMapa(int mapa[10][10], int f, int c) 
{
    int vFila[100], vCol[100], contZombies = 0;
    int zombiesCol1 = 0;

    for(int i=0; i<f; i++) {
        for(int j=0; j<c; j++) {
            if(mapa[i][j] == 1) { // 1 significa muerto viviente
                vFila[contZombies] = i;
                vCol[contZombies] = j;
                contZombies++;
                if(j == 0) zombiesCol1++;
            }
        }
    }

    cout << "Cantidad de zombies: " << contZombies << endl;
    cout << "Coordenadas:" << endl;
    for(int i=0; i<contZombies; i++) 
        cout << "(" << vFila[i] << "," << vCol[i] << ")" << endl;

    if(zombiesCol1 >= 2) cout << "No es posible entrar al complejo" << endl;
    else cout << "Es posible entrar al complejo" << endl;
}

int main() 
{
    int f, c, mapa[10][10];
    cout << "Filas y columnas: "; cin >> f >> c;
    for(int i=0; i<f; i++)
        for(int j=0; j<c; j++) cin >> mapa[i][j];
    
    analizarMapa(mapa, f, c);
    return 0;
}