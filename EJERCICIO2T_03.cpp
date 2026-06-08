// PRÁCTICA ADICIONAL 2T
// Materia: Programación I, Paralelo 4
// Autor: ……………………..
// Fecha creación: 11/05/2026

#include <iostream>
#include <string>
using namespace std;

bool esPalindromo(string texto) 
{
    int inicio = 0;
    int fin = texto.size() - 1;

    while (inicio < fin) 
    {
        if (texto[inicio] != texto[fin]) 
        {
            return false;
        }
        inicio++;
        fin--;
    }
    return true;
}

int main() 
{
    string texto;
    system ("cls");
    cout << "Ingrese una palabra: ";
    cin >> texto;

    if (esPalindromo(texto)) 
    {
        cout << "ES un palindromo" << endl;
    }
    else 
    {
        cout << "NO es un palindromo" << endl;
    }
    return 0;
}