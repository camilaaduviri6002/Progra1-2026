
#include <iostream>
using namespace std;

double CalcularVolumen(double radio, double altura = 10)
{
    return 3.1416 * radio * radio * altura;
}

int main()
{
    double radio, altura;

    cout << "Ingrese el radio: ";
    cin >> radio;

    cout << "Ingrese la altura: ";
    cin >> altura;

    double volumen = CalcularVolumen(radio, altura);

    cout << "El volumen es: " << volumen << endl;

    return 0;
}