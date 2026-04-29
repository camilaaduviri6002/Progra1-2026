// Materia: Programación I, Paralelo 4 
// Autor: Camila Aduvir Quisbert 
// Fecha creación: 13/04/2026

#include <iostream>
#include <string>

using namespace std;

int main() {
    string texto;
    getline(cin, texto);

    for(int i = 0; i < texto.length(); i++) {
        if(i == 0 || texto[i-1] == ' ') {
            if(texto[i] >= 'a' && texto[i] <= 'z') {
                texto[i] = texto[i] - 32;
            }
        }
    }

    cout << texto;

    return 0;
}