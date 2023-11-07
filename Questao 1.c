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

int temperatura;

int
main ()
{
  setlocale (LC_ALL, "");

  printf ("Qual a temperatura atual?\n");
  scanf ("%i", &temperatura);

  if (temperatura > 25)
    {
      printf ("Hoje o clima esta ensolarado!\n");
    }

  else if (temperatura < 15)
    {
      printf ("O clima esta chuvoso!");
    }

  else
    {
      printf ("O clima esta nublado!");
    }



  return 0;
}
