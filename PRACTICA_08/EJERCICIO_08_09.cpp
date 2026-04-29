// Materia: Programación I, Paralelo 4 
// Autor: Camila Aduvir Quisbert 
// Fecha creación: 13/04/2026

#include <iostream>
#include <string>

using namespace std;

bool esPalindromo(string texto) {
    string limpio = "";

    for(int i = 0; i < texto.length(); i++) {
        if(texto[i] != ' ') {
            limpio += tolower(texto[i]);
        }
    }

    int i = 0, j = limpio.length()-1;

    while(i < j) {
        if(limpio[i] != limpio[j]) return false;
        i++;
        j--;
    }

    return true;
}

int main() {
    string texto;
    getline(cin, texto);

    if(esPalindromo(texto))
        cout << "Es palindromo";
    else
        cout << "No es palindromo";

    return 0;
}