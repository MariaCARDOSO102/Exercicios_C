#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(){
    system("clear");       
    
    int Num1, Num2;
    float Resultado;
    
    printf("Digite dois números interios: ");     
    scanf("%d", &Num1);
    scanf("%d", &Num2);
    
    Resultado = Num1 + Num2;               
    printf("A soma dos dois números é: %g\n\n", Resultado);   
    
    Resultado = Num1 - Num2;               
    printf("A subtração do primeiro número pelo segundo é: %g\n\n", Resultado); 
    
    Resultado = Num2 - Num1;               
    printf("A subtração do segundo número pelo primeiro é: %g\n\n", Resultado);
    
    Resultado = Num1 * Num2;               
    printf("A multiplicação desses números é: %g\n\n", Resultado); 
    
    Resultado = (float)Num1 / Num2;               
    printf("O primeiro número dividido pelo segundo número é: %.3f\n\n", Resultado); 
    
    Resultado = (float)Num2 / Num1;               
    printf("O segundo número dividido pelo primeiro número é: %.3f\n\n", Resultado); 
    
    Resultado = Num1 / Num2;               
    printf("O quociente inteiro da divisão do primeiro número pelo segundo é: %g\n\n", Resultado); 
    
    Resultado = Num2 / Num1;               
    printf("O quociente inteiro da divisão do segundo número pelo primeiro é: %g\n\n", Resultado); 
    
    Resultado = Num1 - (Num1 / Num2) * Num2;               
    printf("O resto da divisão do primeiro número pelo segundo é: %g\n\n", Resultado); 
    
    Resultado = Num2 - (Num2 / Num1) * Num1;               
    printf("O resto da divisão do segundo número pelo primeiro é: %g\n\n", Resultado); 
}

