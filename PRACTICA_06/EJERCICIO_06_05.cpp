// Materia: Programación I, Paralelo 4
// Autor:Camila Aduviri Quisbert 
// Carnet: 12764278
// Carrera del estudiante:Economia e inteligencia de negocios 
// Fecha creación: 06/04/2026

#include <iostream>
using namespace std;

double calcularArea(double lado)
{
    return lado * lado;
}

double calcularArea(double base, double altura)
{
    return base * altura;
}

float calcularArea(float radio, float PI)
{
    return PI * radio * radio;
}

int main()
{
    int opcion;

    cout << "1. Cuadrado\n2. Rectangulo\n3. Circulo\n";
    cin >> opcion;

    if (opcion == 1)
    {
        double lado;
        cin >> lado;
        cout << calcularArea(lado);
    }
    else if (opcion == 2)
    {
        double b, h;
        cin >> b >> h;
        cout << calcularArea(b, h);
    }
    else
    {
        float r, pi;
        cin >> r >> pi;
        cout << calcularArea(r, pi);
    }

    return 0;
}