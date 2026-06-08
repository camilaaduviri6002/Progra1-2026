// PRÁCTICA ADICIONAL 2T
// Materia: Programación I, Paralelo 4
// Autor: CAMILA ADUVIRI QUISBERT 
// Fecha creación: 11/05/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void llenarNotas(int notas[20][3])
{
    for (int i = 0; i < 20; i++)
    {      
        for (int j = 0; j < 3; j++) 
        {  
            notas[i][j] =( rand() % ( 100 - 40 + 1) ) + 40;
        }
    }
}

void mostrarNotas(int notas[20][3]) 
{
    cout << " MATRIZ DE NOTAS " << endl;

    for (int i = 0; i < 20; i++) {
        cout << "Estudiante " << (i + 1) << ":    ";
        for (int j = 0; j < 3; j++) {
            cout << notas[i][j] << "      ";
        }
        cout << endl;
    }
}


int calcularPromedio(int notas[20][3], int i) {
    int suma = 0;
    for (int j = 0; j < 3; j++) {     
        suma += notas[i][j];
    }
    return suma / 3;                  
}

void reporteGeneral(int notas[20][3]) {
    cout << "   PROMEDIOS POR ESTUDIANTE" << endl;

    int sumaGeneral   = 0;
    int mejorPromedio = 0;
    int mejorEstudiante = 0;

    for (int i = 0; i < 20; i++) 
    {
        int promedio = calcularPromedio(notas, i);
        sumaGeneral += promedio;

        cout << "Estudiante " << (i + 1) << ": " << promedio << endl;

        if (promedio > mejorPromedio) 
        {
            mejorPromedio   = promedio;
            mejorEstudiante = i + 1;    
        }
    }

    int promedioGeneral = sumaGeneral / 20;

    cout << "   REPORTE FINAL   " << endl;
    cout << "Mejor estudiante es : " << mejorEstudiante << " promedio de " << mejorPromedio << endl;
    cout << "Promedio general: " << promedioGeneral << endl;
}
int main()
{
    srand(time(0));
    system("cls");

    int notas[20][3];
    llenarNotas(notas);
    mostrarNotas(notas);
    reporteGeneral(notas);

    return 0;
}