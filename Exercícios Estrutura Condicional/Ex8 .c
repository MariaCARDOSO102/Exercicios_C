
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    system("clear");
    
    int A, B, C;

    printf("Digite três números inteiros positivos: ");
    scanf("%d %d %d", &A, &B, &C);
   
    if(A>=B && A>=C){
        if(B >=C ){
             printf("Em ordem decrescente: %d, %d, %d\n", A, B, C);
        }
        else{
             printf("Em ordem decrescente: %d, %d, %d\n", A, C, B);
        }
    }
    else if(B>=A && B>=C){
        if(A >= C){
             printf("Em ordem decrescente: %d, %d, %d\n", B, A, C);
        }
        else{
             printf("Em ordem decrescente: %d, %d, %d\n", B, C, A);
        }
    }
    else {
        if (A >= B) {
            printf("Em ordem decrescente: %d, %d, %d\n", C, A, B);
        } else {
            printf("Em ordem decrescente: %d, %d, %d\n", C, B, A);
        }
    }
}
