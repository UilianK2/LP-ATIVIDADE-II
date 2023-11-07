#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>



int main()
{
     setlocale(LC_ALL, "");
   int numero;
   int i;
   float contadorNum=0;
   float media=0;
   float soma;



   for (i = 5; i >= 1; i--)
   {
    printf("Digite a nota %d:\n", i);
    scanf("%d", &numero);
    contadorNum++;
    soma+=numero;
   }   
     media=(soma/contadorNum);
 

   printf("A media dos numeros e:%.2f", media);
   

    return 0;
}