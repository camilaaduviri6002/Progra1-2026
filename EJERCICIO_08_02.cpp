// Materia: Programación I, Paralelo 4 
// Autor: Camila Aduvir Quisbert 
// Fecha creación: 13/04/2026

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> empresa1 = {"Ana","Luis","Carlos","Maria"};
    vector<string> empresa2 = {"Pedro","Luis","Maria","Sofia"};

    cout << "Clientes en comun:\n";

    for(int i = 0; i < empresa1.size(); i++) {
        for(int j = 0; j < empresa2.size(); j++) {
            if(empresa1[i] == empresa2[j]) {
                cout << empresa1[i] << endl;
            }
        }
    }

    return 0;
}