
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    
    int codigo, quant;
    float preco, precoTotal = 0.0; 
    char Continuar;
    
    printf("Código\tPreço\n");  
    printf("1001\t5,32\n");
    printf("1324\t6,45\n");
    printf("6548\t2,37\n");
    printf("987\t5,32\n");
    printf("7623\t6,45\n");
    
    while (1){
        printf("Qual o código do seu produto?" );
        scanf("%d", &codigo);
    
        printf("Qual a quantidade do seu produto?" );
        scanf("%d", &quant);
        
        if(codigo == 1001){
            preco = 5.32;
        }
        else if(codigo == 1324){
            preco = 6.45;
        }
        else if(codigo == 6548){
            preco = 2.37;
        }
        else if(codigo == 987){
            preco = 5.32;
        }
        else if(codigo == 7623){
            preco = 6.45;
        } else{
            printf("Códico inválido!\n");
            continue; 
        }
        
        precoTotal += preco * quant;
        
        printf("Deseja comprar outro produto? (S/N): ");
        scanf(" %c", &Continuar);
        if (Continuar != 'S' && Continuar != 's')
            break;
    }
    
        printf("Total a ser pago: %.2f\n", precoTotal);
    
}
