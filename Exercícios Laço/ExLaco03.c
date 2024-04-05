
#include <stdio.h>

int main()
{
    int num, intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;

    do {
        printf("Digite um número, caso queira terminar a operação digite um número negativo: ");
        scanf("%d", &num);

        if (num >= 0 && num <= 25) {
            intervalo1++;
        } else if (num >= 26 && num <= 50) {
            intervalo2++;
        } else if (num >= 51 && num <= 75) {
            intervalo3++;
        } else if (num >= 76 && num <= 100) {
            intervalo4++;
        }
    } while (num >= 0);

    printf("Quantidade de números nos intervalos:\n");
    printf("[0, 25]: %d\n", intervalo1);
    printf("[26, 50]: %d\n", intervalo2);
    printf("[51, 75]: %d\n", intervalo3);
    printf("[76, 100]: %d\n", intervalo4);
}
