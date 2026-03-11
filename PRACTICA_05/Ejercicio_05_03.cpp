// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri
// Carnet: 12764278
// Fecha creación: 06/03/2026
#include <iostream>
using namespace std;

double calcularSalario(int horas, double tarifa, double &bonificacion);

int main()
{
    int horas;
    double tarifa;
    double bonificacion;

    cout<<"Ingrese horas trabajadas: ";
    cin>>horas;

    cout<<"Ingrese tarifa por hora: ";
    cin>>tarifa;

    double salario = calcularSalario(horas, tarifa, bonificacion);

    cout<<"Salario del trabajador: "<<salario<<endl;
    cout<<"Bonificacion por horas extra: "<<bonificacion<<endl;

    return 0;
}

double calcularSalario(int horas, double tarifa, double &bonificacion)
{
    double salarioBase;
    int horasExtra;

    if(horas > 8)
    {
        salarioBase = 8 * tarifa;
        horasExtra = horas - 8;
        bonificacion = horasExtra * tarifa * 0.5;
    }
    else
    {
        salarioBase = horas * tarifa;
        bonificacion = 0;
    }

    double salarioTotal = salarioBase + bonificacion;

    return salarioTotal;
}