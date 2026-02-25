// Materia: Programación I, Paralelo 4
// Autor: Camila Aduviri Quisbert 
// Carnet: 12764278
// Carrera del estudiante:Economia e Inteligencia de negocios
// Fecha creación: 22/02/2026

#include <iostream>

using namespace std;
int main()
{
    int n, sumtotal=0, sumimpares=0, sumpares=0, sumprimos=0;
    cout << "Ingrese numeros del 1 al 100: ";
    cin >> n;

    do
    {
         cout << "Ingrese numeros del 1 al 100: ";
        cin >> n;
        if (n !=0 and n<= 100)
        {
            int esPrimo = 1;

            sumtotal += n;
        
            if (n % 2 == 0 )  //pares 
       
            sumpares += n;
       
            else        //impares 
       
            sumimpares += n;

            if (n<2 )
                esPrimo=0;
            for (int i = 2 ; i <= n / 2 ; i++)
            {
                if(n % i == 0) 
                {
                    esPrimo=0;
                    break;
                }
                
            }
            
            if (esPrimo ==1)
                sumprimos +=n;
              
       }
       

    } while (n !=0);
    
    cout << "suma total: "<< sumtotal <<endl;
    cout << "suma pares: " << sumpares<<endl;
    cout << "suma impares: " << sumimpares <<endl;
    cout << "suma primos: " << sumprimos << endl;



    return 0;

}

