//Como actividad, vamos a construir un programa en lenguaje C que calcule si un número entero ingresado por el usuario es un número primo
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num; 
    
    
    printf("Ingrese el número entero por favor: ");
    scanf("%d", &num);
    printf("El numero ingresado es: %d\n", num);

    
    if (num <= 1)
    {
        printf("Los numeros menores o iguales a 1 no son primos");
    } else {
        bool esPrimo=true; 

        for (int i = 2; i <= num/2; i++) 
        {
            if (num%1==0)
            {
                esPrimo=false; 
                break;
            }
            
        }
        if(esPrimo) 
            printf("%d es primo\n", num);
        else 
            printf("%d no es primo\n", num);
    }
    return 0;
}