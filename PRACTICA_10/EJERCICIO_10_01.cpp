// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert
// Carnet: 12764278
// Carrera del estudiante: Economia e inteligencia de negocios
// Fecha creación: 15/04/2026
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void procesarResultados(const vector<string> &nombres, vector<int> &notas, double &promedio, int &aprobados) {
    double sumaTotal = 0;
    aprobados = 0;

    for (int i = 0; i < notas.size(); i++) {

        if (notas[i] >= 45 && notas[i] <= 50) {
            notas[i] = 51;
        }

        // Conteo de aprobados
        if (notas[i] >= 51) {
            aprobados++;
        }

        sumaTotal += notas[i];
    }

  
    if (notas.size() > 0) {
        promedio = sumaTotal / notas.size();
    } else {
        promedio = 0;
    }
}

int main() {
    vector<string> nombres = {"Ana", "Pedro", "Luis", "Marta", "Juan"};
    vector<int> notas = {40, 48, 70, 46, 90};
    
    double promedioClase;
    int cantidadAprobados;
    procesarResultados(nombres, notas, promedioClase, cantidadAprobados);

    cout << "--- REPORTE DE NOTAS ACTUALIZADO ---" << endl;
    for (int i = 0; i < nombres.size(); i++) {
        cout << "Estudiante: " << nombres[i] << " \t| Nota: " << notas[i] << endl;
    }

    cout << "\n--- ESTADISTICAS ---" << endl;
    cout << "Promedio general: " << promedioClase << endl;
    cout << "Total aprobados: " << cantidadAprobados << endl;

    return 0;
}