/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero : ");
    scanf("%d", &num2);

    if (num1 > num2) 
    {
        printf("O maior numero e %d o menor numero e %d.\n", num1, num2);
    } 
    else if (num2 > num1) 
    {
        printf("O maior numero e %d e o menor numero e %d.\n", num2, num1);
    } 
    else 
    {
        printf("Os numeros sao iguais.\n");
    }

    return 0;
}
