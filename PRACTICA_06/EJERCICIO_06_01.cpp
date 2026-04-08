
#include <iostream>
using namespace std;

void IntercambiarValores(int &a, int &b)
{
    int aux = a;
    a = b;
    b = aux;
}

int main()
{
    int x, y;

    cout << "Ingrese el primer numero: ";
    cin >> x;

    cout << "Ingrese el segundo numero: ";
    cin >> y;

    cout << "Antes: x = " << x << ", y = " << y << endl;

    IntercambiarValores(x, y);

    cout << "Despues: x = " << x << ", y = " << y << endl;

    return 0;
}

