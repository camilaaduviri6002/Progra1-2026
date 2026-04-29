// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert 
// Carnet: 12764278
// Carrera del estudiante: Economia e inteligencia de negocios
// Fecha creación: 06/04/2026
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese cantidad de datos (max 100): ";
    cin >> n;

    // Validación básica
    if(n <= 0 || n > 100) {
        cout << "Cantidad invalida";
        return 0;
    }

    double calificaciones[100];
    double desviacion[100];

    double suma = 0;

    // Entrada de datos
    for(int i = 0; i < n; i++) {
        cout << "Ingrese calificacion " << i+1 << ": ";
        cin >> calificaciones[i];
        suma += calificaciones[i];
    }

    // Promedio
    double promedio = suma / n;
    cout << "\nPromedio: " << promedio << endl;

    // Desviaciones
    double sumaCuadrados = 0;

    cout << "\nCalificacion - Desviacion\n";

    for(int i = 0; i < n; i++) {
        desviacion[i] = calificaciones[i] - promedio;
        sumaCuadrados += desviacion[i] * desviacion[i];

        cout << calificaciones[i] << " -> " << desviacion[i] << endl;
    }

    // Varianza
    double varianza = sumaCuadrados / n;
    cout << "\nVarianza: " << varianza << endl;

    return 0;
}