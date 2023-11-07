/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int n1, n2;
int escolha;
int sub1;
int sub2;
int soma;

int main ()
{
  setlocale (LC_ALL, "");

  printf ("Digite o primeiro numero:\n");
  scanf ("%i", &n1);

  printf ("Digite o segundo numero:\n");
  scanf ("%i", &n2);

  printf ("Digite a operacao:\n");
  printf ("Digite 1 para operacao: ( - )\n");
  printf ("Digite 2 para operacao: ( + )\n");
  scanf ("%i", &escolha);

  sub1 = n1-n2;
  soma= n1+n2;
switch (escolha)
{
case 1:
  printf("A subtracao do numero %i e %i e:%i\n", n1, n2, sub1);
  
  break;

  case 2:
  printf("A soma dos numeros %i e %i e:%i\n", n1, n2, soma );
  break;

default:
printf("A opcao e invalida!\n");
  break;
}
  return 0;
}