// Materia: Programación I, Paralelo 4 
// Autor: Camila Aduvir Quisbert 
// Fecha creación: 13/04/2026

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string frase;
    getline(cin, frase);

    vector<string> palabras;
    string aux = "";

    for(int i = 0; i < frase.length(); i++) 
    {
        if(frase[i] == ' ') {
            palabras.push_back(aux);
            aux = "";
        } else {
            aux += frase[i];
        }
    }
    palabras.push_back(aux);

    for(int i = palabras.size()-1; i >= 0; i--)
    {
        cout << palabras[i] << " ";
    }

    return 0;
}