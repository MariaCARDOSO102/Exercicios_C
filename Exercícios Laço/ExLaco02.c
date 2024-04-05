
#include <stdio.h>

int main()
{
    float media, soma = 0;
    int num, totalNum = 0;
    
    printf ("Digite um número ou 0 para encerrar a operação: ");
    scanf ("%d", &num);
    
    while(num != 0){
        if(num % 2 == 0) {
            soma += num;
        }  
        
        printf ("Digite outro número ou 0 para encerrar a operação: ");
        scanf ("%d", &num);
        
        totalNum++;
        
        if(num == 0){
            printf("Operação encerrada!");
        }
    }
    
     if(totalNum > 0){
        media = soma / totalNum;
        printf("A média dos números pares é %.2f: \n", media);
     }
     else {
         printf("Nenhum número foi digitado! \n");
     }
    
}
