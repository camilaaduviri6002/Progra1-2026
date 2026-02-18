// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert
// Carnet: 12764278.
// Carrera del estudiante:Economía e inteligencia de negocios
// Fecha creación: 17/02/2026

#include <iostream>

using namespace std;
int main ()
{
    float precio;
    float total;
    float iva;
    
    cout <<"Ingrese el precio: ";
    cin >> precio;
    iva= precio * 0.13;
    total= precio + iva;
    
    cout << "Precion + IVA: " << total << endl;
    
    return 0;
}
