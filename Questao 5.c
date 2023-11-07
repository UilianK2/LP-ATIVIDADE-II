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
    printf("Escolha um idioma de sua preferencia:\n");
    printf("1 - Ingles:\n");
    printf("2 - Espanhol:\n");
    printf("3 - Frances:\n");
    scanf ("%i",&escolha);
    
    switch (escolha)
{
case 1:
   printf ("Seja bem-vindo(a), o idioma escolhido foi Ingles.");
    break;
    
    case 2:
   printf ("Seja bem-vindo(a), o idioma escolhido foi Espanhol.");
    break;
    
    case 3:
   printf ("Seja bem-vindo(a), o idioma escolhido foi Frances.");
    break;

default:
printf ("Opcao invalida!");
    break;
}

    return 0;
}
