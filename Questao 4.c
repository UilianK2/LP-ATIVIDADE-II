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

int idade;

int main()
{
  setlocale (LC_ALL, "Portuguese");

  
  printf ("Qual a sua idade\n");
  scanf ("%i",&idade);
  
  if (idade >=18)
  {
      printf("Acesso permitido");
  }
  else
  {
      printf("Acesso negado");
  }


  return 0;
}