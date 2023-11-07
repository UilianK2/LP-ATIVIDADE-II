#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float valor;
    int opcao;
    float fah;
    float km;

    do
    {

        printf("Escolha uma opcao:\n");
        printf("\n");
        printf("1- Para converter Celsius para Fahrenheit.\n");
        printf("2- Para converter km para milhas:\n");
        scanf("%i", &opcao);

        printf("Qual o valor que deseja converter?:");
        scanf("%f", &valor);

        fah = (valor * 9 / 5) + 32;
        km = (valor / 1.609);

        switch (opcao)
        {
        case 1:
            printf("O valor em Fahrenheit e:%.1f\n", fah);
            break;

        case 2:
            printf("O valor em milhas e:%.6f\n", km);
            break;

        default:
            printf("Codigo invalido!\n");
            break;
        }
    } while (valor != 0);
    printf("programa encerrado!:");

    return 0;
}
