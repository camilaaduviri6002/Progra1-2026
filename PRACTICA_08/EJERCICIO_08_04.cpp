// Materia: Programación I, Paralelo 4 
// Autor: Camila Aduvir Quisbert 
// Fecha creación: 13/04/2026

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int n;
    cin >> n;

    vector<int> pixeles(n);
    vector<int> conteo(26, 0);

    for(int i = 0; i < n; i++) {
        pixeles[i] = rand() % 256;
        int grupo = pixeles[i] / 10;
        conteo[grupo]++;
    }

    for(int i = 0; i < conteo.size(); i++) {
        cout << i*10 << "-" << i*10+9 << ": " << conteo[i] << endl;
    }

    return 0;
}