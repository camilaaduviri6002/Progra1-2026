// Materia: Programación I, Paralelo 4 
// Autor: Camila Aduvir Quisbert 
// Fecha creación: 13/04/2026

#include <iostream>
#include <string>

using namespace std;

int main() {
    string correo;
    cin >> correo;

    int arrobas = 0;
    bool punto = false;

    for(int i = 0; i < correo.length(); i++) 
    {
        if(correo[i] == '@') arrobas++;
        if(arrobas == 1 && correo[i] == '.') punto = true;
    }

    if(arrobas == 1 && punto)
        cout << "Correo valido";
    else
        cout << "Correo invalido";

    return 0;
}