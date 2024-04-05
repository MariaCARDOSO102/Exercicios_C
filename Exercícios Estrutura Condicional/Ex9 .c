#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int anos, meses, dias, idadeEmDias;

    printf("Digite a idade em anos, meses e dias: ");
    scanf("%d %d %d", &anos, &meses, &dias);

    idadeEmDias = anos * 365;

    idadeEmDias += meses * 30;

    idadeEmDias += dias;

    printf("A idade expressa apenas em dias é: %d dias\n", idadeEmDias);

}