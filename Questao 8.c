/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int
main ()
{
  int numero;


  printf ("Digite um numero: ");
  scanf ("%d", &numero);

if (numero < 0)
    {
      printf ("Numero invalido.\n");
      return 0;
    }

  while (numero >= 0)
    {
      printf ("%d\n", numero);
      numero--;
    }


  return 0;
}
