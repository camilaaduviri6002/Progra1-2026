// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert
// Carnet: 12764278.
// Carrera del estudiante:Economía e inteligencia de negocios
// Fecha creación: 17/02/2026
#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    int suma;
    int resta;
    int multi;
    int division;

    cout << "Ingrese primer numero: ";
    cin >> num1;
    cout << "Ingrese segundo numero: ";
    cin >> num2;

    suma = num1 + num2;
    resta = num1 - num2;
    multi = num1 * num2;

    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicacion: " << multi << endl;

    if (num2 == 0)
    {
        cout << "No se puede dividir entre 0." << endl;
    }
    else 
    {
        division = num1 / num2;
        cout << "Division: " << division << endl;
    }

    return 0;
}
