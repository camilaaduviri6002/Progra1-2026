// Materia: Programación I, Paralelo 4 
// Autor: Camila Aduvir Quisbert 
// Fecha creación: 13/04/2026

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    vector<string> nombres = {"Ana","Luis","Carlos","Maria","Jose","Lucia","Pedro","Sofia","Diego","Elena"};
    vector<string> apellidos = {"Perez","Gomez","Lopez","Rojas","Mamani","Quispe","Flores","Vargas","Torrez","Ramos"};
    vector<int> edades = {18,19,20,21,22,23,24,25,26,27};

    int N;
    cout << "Cuantas veces generar: ";
    cin >> N;

    for(int i = 0; i < N; i++) {
        int i1 = rand() % 10;
        int i2 = rand() % 10;
        int i3 = rand() % 10;

        cout << nombres[i1] << " " << apellidos[i2] << " - Edad: " << edades[i3] << endl;
    }

    return 0;
}