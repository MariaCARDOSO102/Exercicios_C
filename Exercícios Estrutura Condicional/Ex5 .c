
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    
    float altura, peso; 
    char sexo;

        printf("Qual o seu sexo? Digite M para mascolino e F para feminino." );
        scanf("%c", &sexo);
    
        printf("Qual a sua altura em metros?" );
        scanf("%f", &altura);

    if(sexo == 'M' || sexo == 'm'){
        peso = (72.7 * altura) - 58;
        printf("O peso ideal de um homem com %.2f de altura é de: %.2f kg. \n", altura, peso);
    }
    else if(sexo == 'F' || sexo == 'f'){
        peso = (62.1 * altura) - 44.7;
        printf("O peso ideal de uma mulher com %.2f de altura é de: %.2f kg. \n", altura, peso);
    }
    else{
        printf("Sexo inválido! \n");
    }
}
