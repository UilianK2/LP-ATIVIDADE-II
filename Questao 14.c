#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int contadorPar =0;
int contadorImpar =0;
float somaPar;
float somaImpar;
float mediaPar;
float mediaImpar;
int numero;

int main()
{
    setlocale(LC_ALL ,"");

    do
    {
        printf("Digite um numero:\n");
        scanf("%i" , &numero);

        if (numero > 0)
        {
            if (numero % 2 == 0)
            {
                contadorPar ++;
                somaPar += numero;
            }
            else
            {
                contadorImpar++;
                somaImpar += numero;
            }
            
        }
        
    } while (numero > 0);

    mediaPar = somaPar / contadorPar;
    mediaImpar = somaImpar / contadorImpar;

    printf("Quantidade de numeros pares e: %i\n" , contadorPar);
    printf("Quantidade de numeros impares e: %i\n" , contadorImpar);
    printf("Media dos números pares e: %.1f\n" , mediaPar);
    printf("Media dos números ímpares e: %.1f\n" , mediaImpar);

    

    return 0;
}