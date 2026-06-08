// PRÁCTICA ADICIONAL 2T
// Materia: Programación I, Paralelo 4
// Autor: ..
// Fecha creación: 11/05/2026

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void llenarMonitoreo(int monitoreo[5][24]) 
{
    for (int i = 0; i < 5; i++) 
    {      
        for (int j = 0; j < 24; j++) 
        {  
            
            monitoreo[i][j] = 20 + rand() % 21; 
        }
    }
}
void mostrarMonitoreo(vector<string> pacientes, int monitoreo[5][24]) {
    cout << "    REGISTRO DE TEMPERATURAS   " << endl;
    cout << "  ";

    for (int i = 0; i < 5; i++)
     {
        cout << pacientes[i] << " ";
        for (int j = 0; j < 24; j++) 
        {
            cout << monitoreo[i][j] << " ";
        }
        cout << endl;
    }
}
void VerificarAlertas(vector<string> pacientes, int monitoreo[5][24], int umbral) {
    cout << "     ALERTAS    " << endl;

    for (int i = 0; i < 5; i++)
    {      
        int veces = 0;                 
        for (int j = 0; j < 24; j++)
        { 
            if (monitoreo[i][j] > umbral) {
                veces= veces + 1;               
            }
        }
        if (veces > 3) 
        {
            cout << "ALERTA: " << pacientes[i]
                 << " supero el umbral " << veces << " veces" << endl;
        }

        
    }
}

int main() {
    srand(time(0)); 
    system("cls");

    vector<string> pacientes = { "Ana Torroja","Juan Luna","Sergio Murillo","Liliana Espinoza","Mercedes Lima"};

    int monitoreo[5][24];

    llenarMonitoreo(monitoreo);
    mostrarMonitoreo(pacientes, monitoreo);

    int umbral = 38;

    VerificarAlertas(pacientes, monitoreo, umbral);

    return 0;
}