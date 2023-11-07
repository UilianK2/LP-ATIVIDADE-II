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
#include <stdbool.h>

int
main ()
{
  setlocale (LC_ALL, "Portuguese");

  float nota;

  printf ("Digite uma nota:\n");
  scanf ("%f", &nota);

  if (nota >= 9)
    {
      printf ("Nota excelente\n");
    }
  else if (nota >= 7 && nota <= 8.9)
    {
      printf ("Nota boa\n");
    }
  else if (nota >= 5 && nota <= 6.9)
    {
      printf ("Nota razoavel\n");
    }
  else
    {
      printf("Nota baixa\n");
    }


  return 0;
}