
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    
    int codComida, quant;
    float preco, precoTotal = 0.0; 
    char Continuar;
    
    printf("Cardápio Lanchonete:\n");     
    printf("Especificação\tCódigo\tPreço\n");  
    printf("Cachorro quente\t100\t1,20\n");
    printf("Bauru simples\t101\t1,30\n");
    printf("Bauru com ovo\t102\t1,50\n");
    printf("Hambúrger\t103\t1,20\n");
    printf("Cheeseburguer\t104\t1,30\n");
    printf("Refrigerante\t105\t1,00\n");
    
    while (1){
        printf("Qual o código do seu pedido?" );
        scanf("%d", &codComida);
    
        printf("Qual a quantidade de seu pedido?" );
        scanf("%d", &quant);
        
        if(codComida == 100){
            preco = 1.20;
        }
        else if(codComida == 101){
            preco = 1.30;
        }
        else if(codComida == 102){
            preco = 1.50;
        }
        else if(codComida == 103){
            preco = 1.20;
        }
        else if(codComida == 104){
            preco = 1.30;
        }
        else if(codComida == 105){
            preco = 1.00;
        } else{
            printf("Códico inválido!\n");
            continue; 
        }
        
        precoTotal += preco + quant;
        
        printf("Deseja fazer outro pedido? (S/N): ");
        scanf(" %c", &Continuar);
        if (Continuar != 'S' && Continuar != 's')
            break;
    }
    
        printf("Total a ser pago: %.2f\n", precoTotal);
    
}
