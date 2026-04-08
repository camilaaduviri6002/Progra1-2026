// Materia: Programación I, Paralelo 4
// Autor:Camila Aduviri Quisbert 
// Carnet: 12764278
// Carrera del estudiante:Economia e inteligencia de negocios 
// Fecha creación: 06/04/2026

#include <iostream>
using namespace std;

void calcularTiempo(int totalSegundos, int &h, int &m, int &s)
{
    h = totalSegundos / 3600;
    totalSegundos %= 3600;
    m = totalSegundos / 60;
    s = totalSegundos % 60;
}

int main()
{
    int total, h, m, s;

    cout << "Ingrese segundos: ";
    cin >> total;

    calcularTiempo(total, h, m, s);

    cout << "Horas: " << h << endl;
    cout << "Minutos: " << m << endl;
    cout << "Segundos: " << s << endl;

    return 0;
}