#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


float preco = 0;
float desconto10;
float desconto15;
int dia;

int
main ()
{
  setlocale (LC_ALL, "");

  printf ("Digite o valor do produto\n");
  scanf ("%f", &preco);

  desconto10 = (preco - (preco * 10 / 100));
  desconto15 = (preco - (preco * 15 / 100));

  printf ("Digite o nC:mero referente ao dia da semana \n");
  printf ("1 - Domingo  \n");
  printf ("2 - Segunda  \n");
  printf ("3 - Terca \n");
  printf ("4 - Quarta  \n");
  printf ("5 - Quinta \n");
  printf ("6 - Sexta  \n");
  printf ("7 - Sabado \n");
  scanf ("%i", &dia);

  switch (dia)
    {
    case 1:
    case 7:

      if (preco > 100)
	{
	  preco = desconto15;
	  printf ("O preco total e: R$%.2f", preco);
	}

      break;

    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      if (preco > 100)
	{

	  preco = desconto10;
	  printf ("O preC'o total C): R$%.2f", preco);
	}

      break;

    default:

      printf ("Dia invalido!");
      break;
    }

  return 0;
}
