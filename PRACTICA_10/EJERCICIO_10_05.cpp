// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert
// Carnet: 12764278
// Carrera del estudiante: Economia e inteligencia de negocios
// Fecha creación: 15/04/2026

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void asignarAsientoEspecial(char sala[10][10], vector<string> &espera, int fila, int col, bool &exito) {
    if (sala[fila][col] == 'D' && !espera.empty()) {
        sala[fila][col] = 'R'; 
        
        cout << "Asiento [" << fila << "][" << col << "] asignado a: " << espera[0] << endl;
        
        espera.erase(espera.begin());
        
        exito = true;
    } else {
        exito = false;
    }
}

int main() {
    char mapa[10][10];
    
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++) mapa[i][j] = 'D';

    vector<string> listaEspera = {"Carlos Rojas", "Mariana Sosa", "Roberto Vaca"};
    
    int f, c;
    bool logroReservar;

    cout << "--- SISTEMA DE RESERVAS ---" << endl;
    cout << "Fila deseada (0-9): "; cin >> f;
    cout << "Columna deseada (0-9): "; cin >> c;

    asignarAsientoEspecial(mapa, listaEspera, f, c, logroReservar);

    if (logroReservar) {
        cout << "Reserva exitosa." << endl;
    } else {
        cout << "No se pudo realizar la reserva (Asiento ocupado o lista vacia)." << endl;
    }

    cout << "Personas restantes en espera: " << listaEspera.size() << endl;

    return 0;
}