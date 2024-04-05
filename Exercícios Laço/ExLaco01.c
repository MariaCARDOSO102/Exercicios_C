
#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media, soma;
    int codAluno, totalAlunos = 0;
    
    printf ("Digite o código do aluno: ");
    scanf ("%d", &codAluno);
    
    while(codAluno != 0){
        
        printf ("Digite a primeira nota: ");
        scanf ("%f", &nota1);
    
        printf ("Digite a segunda nota: ");
        scanf ("%f", &nota2);
     
        printf ("Digite a terceira nota: ");
        scanf ("%f", &nota3);
    
        soma = nota1 + nota2 + nota3;
        media = soma / 3;
        
        printf("A média das notas é %.2f: \n", media);
        
        totalAlunos++;
        
        printf("Digite o código do próximo aluno: ", codAluno);
        scanf("%d", &codAluno);
        
        if(codAluno == 0){
            printf("Operação encerrada!");
        }
    }
    
    
}
