// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert 
// Carnet: 12764278
// Carrera del estudiante: Economia e inteligencia de negocios
// Fecha creación: 06/04/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std ;
void voltajes();
void distancias();
void temperaturas();
void caracteres() ;
void anios() ;
void velocidades() ;
int main() 
{
    srand(time(0));

    voltajes();
    temperaturas();
    caracteres();
    anios();
    velocidades();
    distancias();

    return 0;
}
void voltajes() 
{
    double v[100];
    for(int i = 0; i < 100; i++) {
        v[i] = 20.0 + (rand() % 201);
        cout << v[i] << " ";
    }
    cout << endl;
}
void distancias()
{
    double d[1000];
    for(int i = 0; i < 1000; i++) {
        d[i] = 1 + rand() % 1000;
    }
    cout << "Distancias generadas:" << endl;
}
void temperaturas()
{
    double t[50];
    for(int i = 0; i < 50; i++) {
        t[i] = rand() % 101;
        cout << t[i] << " ";
    }
    cout << endl;
}
void caracteres() 
{
    char c[30];
    for(int i = 0; i < 30; i++) {
        c[i] = 'A' + rand() % 26;
        cout << c[i] << " ";
    }
    cout << endl;
}
void anios() 
{
    int a[100];
    for(int i = 0; i < 100; i++) {
        a[i] = 1990 + rand() % 36;
        cout << a[i] << " ";
    }
    cout << endl;
}
void velocidades() 
{
    double v[32];
    for(int i = 0; i < 32; i++) {
        v[i] = 10 + rand() % 291;
        cout << v[i] << " ";
    }
    cout << endl;
}