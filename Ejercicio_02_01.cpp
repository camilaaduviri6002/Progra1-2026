// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert 
// Carnet: 12764278
// Carrera del estudiante:Economia e Inteligencia de negocios
// Fecha creación: 22/02/2026

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Ingrese un numero del 1-10: ";
    cin >> n;

if (n <= 10 and n >=1 )
{
      for (int i = 1; i <=10 ; i++ )
    { 
        cout<< n << " x"<< i<< " ="<< n*i << endl;
    }
}
else
{
    cout<< "Numero fuera de rango" << endl;
    
}

    return 0;

}