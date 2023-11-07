int main() {
    int num, i, flag = 0;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    switch (num) {
        case 0:
        case 1:
            flag = 1;
            break;
        default:
            for (i = 2; i <= num/2; ++i) {
                if (num % i == 0) {
                    flag = 1;
                    break;
                }
            }
    }
    
    if (flag == 0)
        printf("Numero primo.\n");
    else
        printf("Numero não primo.\n");
    
    return 0;
}