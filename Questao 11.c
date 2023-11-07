#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL, "");
    int codCorreto = 123456;
    int codigo;

    printf("Digite o codigo:\n");
    scanf("%i", &codigo);

    do
    {
        printf("Codigo invalido\n");
        scanf("%i", &codigo);
    } while (codigo != codCorreto);

    printf("Seja bem-vindo(a)!\n");

    return 0;
}