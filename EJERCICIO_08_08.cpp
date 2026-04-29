// Materia: Programación I, Paralelo 4 
// Autor: Camila Aduvir Quisbert 
// Fecha creación: 13/04/2026

#include <iostream>
#include <string>

using namespace std;

int main() {
    string texto;
    getline(cin, texto);

    char delim = ',';
    string palabra = "";

    for(int i = 0; i < texto.length(); i++) {
        if(texto[i] == delim) {
            cout << palabra << endl;
            palabra = "";
        } else {
            palabra += texto[i];
        }
    }

    cout << palabra << endl;

    return 0;
}