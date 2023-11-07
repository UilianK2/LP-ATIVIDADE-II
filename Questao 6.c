/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int escolha;
int main()
{
    printf("Escolha um produto\n");
    printf("1 - Camisa R$20,00\n");
    printf("2 - Calca R$40,00\n");
    printf("3 - Sapato R$70,00\n");
    scanf ("%i",&escolha);
    
    switch (escolha)
{
case 1:
   printf ("Produto Camisa:\n");
    printf ("Custa R$ 20,00.\n");
    break;
    
    case 2:
   printf ("Produto Calca:\n");
    printf ("Custa R$ 40,00.\n");
    break;
    
    case 3:
   printf ("Produto Sapato:\n");
    printf ("Custa R$ 70,00.\n");
    break;

default:
printf ("Opcao invalida!");
    break;
}

    return 0;
}
