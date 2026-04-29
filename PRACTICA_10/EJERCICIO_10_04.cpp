// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert
// Carnet: 12764278
// Carrera del estudiante: Economia e inteligencia de negocios
// Fecha creación: 15/04/2026
#include <iostream>
#include <string>

using namespace std;

void analizarClima(float datos[4][7], int ciudadIdx, float &maxima, float &minima, float &promedio) {
    maxima = datos[ciudadIdx][0];
    minima = datos[ciudadIdx][0];
    float suma = 0;

    for (int j = 0; j < 7; j++) {
        if (datos[ciudadIdx][j] > maxima) maxima = datos[ciudadIdx][j];
        if (datos[ciudadIdx][j] < minima) minima = datos[ciudadIdx][j];
        suma += datos[ciudadIdx][j];
    }
    promedio = suma / 7;
}

int main() {
    string ciudades[4] = {"La Paz", "Santa Cruz", "Cochabamba", "Oruro"};
    float temperaturas[4][7] = {
        {12, 15, 14, 13, 16, 15, 14}, // La Paz
        {30, 32, 31, 29, 33, 34, 30}, // Santa Cruz
        {22, 24, 23, 25, 24, 23, 22}, // Cochabamba
        {10, 11, 9, 12, 11, 10, 8}    // Oruro
    };

    string buscada;
    cout << "Ingrese nombre de la ciudad: ";
    getline(cin, buscada);

    int idx = -1;
    for (int i = 0; i < 4; i++) {
        if (ciudades[i] == buscada) idx = i;
    }

    if (idx != -1) {
        float max, min, prom;
        analizarClima(temperaturas, idx, max, min, prom);
        cout << "Resultados para " << buscada << ":" << endl;
        cout << "- Maxima: " << max << "°C" << endl;
        cout << "- Minima: " << min << "°C" << endl;
        cout << "- Promedio: " << prom << "°C" << endl;
    } else {
        cout << "Ciudad no encontrada." << endl;
    }

    return 0;
}