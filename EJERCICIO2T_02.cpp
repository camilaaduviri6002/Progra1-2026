// PRÁCTICA ADICIONAL 2T
// Materia: Programación I, Paralelo 4
// Autor:Camila Aduviri Quisbert 
// Fecha creación: 11/05/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior) 
{
    return ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
}

void LlenarVector(vector<int> &numeros, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        numeros.push_back(GenerarAleatorio(0, 255));
    }
}
void ImprimirVector(vector<int> numeros) 
{
    for (int i = 0; i < numeros.size(); i++) 
    {
        cout << numeros[i] << " " ;
    }
}
vector<int> LlenarPorRangos(vector<int> numeros)
{
    vector<int> resultado(26, 0);
    int posicion = 0;
    for (int i = 0; i < numeros.size(); i++) 
    {
        posicion = numeros[i] / 10;
        if (posicion > 25) posicion = 25;  
        resultado[posicion]++;
    }
    return resultado;
}
void MostrarRangos(vector<int> resultado) {
    for (int i = 0; i < 26; i++) 
    {
        int inicio = i * 10;
        int fin = inicio + 9;
        if (fin > 255) fin = 255;
        cout << inicio << "-" << fin << ": " << resultado[i]<< endl;
    }
}
int main() 
{
    srand(time(0));         
    system("cls");
    vector<int> numeros;
    vector<int> resultado;

    LlenarVector(numeros, 15);

    cout << "Pixeles generados: "<< endl;
    ImprimirVector(numeros) ;

    resultado = LlenarPorRangos(numeros);
    cout << endl <<"Distribucion rangos:" << endl;
    MostrarRangos(resultado); 

    return 0;
}