// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert 
// Carnet: 12764278
// Fecha creación: 9/03/2026
#include <iostream>
using namespace std;

float areaTriangulo(float base, float altura);

int main()
{
    float base, altura;

    cout<<"Ingrese la base: ";
    cin>>base;

    cout<<"Ingrese la altura: ";
    cin>>altura;

    cout<<"Area del triangulo: "<<areaTriangulo(base,altura);

    return 0;
}

    float areaTriangulo(float base, float altura)
{
    float area;
    area = (base * altura) / 2;
    return area;
}