// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert
// Carnet: 12764278
// Carrera del estudiante: Economia e inteligencia de negocios
// Fecha creación: 15/04/2026
#include <iostream>
#include <vector>
#include <string>

using namespace std;


void limpiarBitacora(vector<string> &registros, char caracterProhibido, int &correccionesRealizadas) {
    for (int i = 0; i < registros.size(); i++) {
        string &nombre = registros[i]; 
        bool huboCambio = false;

        for (int j = 0; j < nombre.length(); j++) {
            if (nombre[j] == caracterProhibido) {
                nombre.erase(j, 1); 
                j--; 
                huboCambio = true;
            }
        }

        if (huboCambio) {
            correccionesRealizadas++;
        }
    }
}

int main() {
    vector<string> registros = {"Juan#Perez", "Ma#ria", "Luis", "An#a_Gomez"};
    char prohibido = '#';
    int totalCorrecciones = 0;

    cout << "--- BITACORA ORIGINAL ---" << endl;
    for (string s : registros) cout << "- " << s << endl;

    limpiarBitacora(registros, prohibido, totalCorrecciones);

    cout << "\n--- BITACORA LIMPIA ---" << endl;
    for (string s : registros) cout << "- " << s << endl;
    cout << "\nCorrecciones realizadas: " << totalCorrecciones << endl;

    return 0;
}