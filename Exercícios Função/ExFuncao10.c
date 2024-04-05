#include <stdio.h>

void inserirNum(int cont, int linha);
void inserirEsp(int espaco);

int main() {
    int num;
    int base; 
    int linha = 1;
    int espaco;
    
    printf("Digite o número de linhas da pirâmide: ");
    scanf("%d", &num);
    
    base = (num - 1) * 2 + 1;  
    espaco = base / 2;
    
    int cont = 1;
    int i, x, y;
    for(i = 0; i < num; i++) {
        espaco--;
        
        inserirEsp(espaco);
         
        inserirNum(cont, linha);
        
        linha++;
        cont += 2;
        printf("\n");
    }

    return 0;
}

void inserirNum(int cont, int linha) {
    int x;
    for(x = 0; x < cont; x++) {
        printf("%d", linha);
    }
}

void inserirEsp(int espaco) {
    int y;
    for(y = 0; y < espaco; y++) {
       printf(" ");
    }
}