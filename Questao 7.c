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
    printf("Escolha uma opcao\n");
    printf("1 - Novo jogo \n");
    printf("2 - Carregar jogo \n");
    printf("3 - Configuracoes \n");
    scanf ("%i",&escolha);
    
    switch (escolha)
{
case 1:
   printf ("Iniciando um novo jogo:\n");
    break;
    
    case 2:
   printf ("Carregando um jogo em andamento:\n");
   
    break;
    
    case 3:
   printf ("Menu de Configuracoes:\n");
    break;

default:
printf ("Opcao invalida!");
    break;
}

    return 0;
}
