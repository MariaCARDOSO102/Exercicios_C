#include <stdio.h>
#include <string.h>

struct Pessoa
{
    int codigo;
    char nome[10];
    int telefone; 
};


void Agenda(); 
void cadastrar(struct Pessoa *pessoa, int *contador);
void listar(struct Pessoa *pessoa, int contador);
void editar (struct Pessoa *pessoa, int contador);
void excluir (struct Pessoa *pessoa, int *contador);
void ordenar (struct Pessoa *pessoa, int *contador);


int main()
{
    struct Pessoa pessoa[10];
    int contador = 0; 
    
    for(int i = 0; i < 10; i++)
    {
        int num;
        
        printf("\n");
        Agenda();
        printf("\n");
        
        printf("Executar: ");
        scanf("%d", &num);
        
        if(num == 1)
        {
            printf("\n");
            listar(pessoa, contador);
        }
        else if(num == 2)
        {
            printf("\n");
            cadastrar(pessoa, &contador);
        }
        else if(num == 3)
        {
            printf("\n");
            editar(pessoa, contador);
        }
        else if(num == 4)
        {
            printf("\n");
            excluir(pessoa, &contador);
        }
        else if(num == 5)
        {
            printf("\n");
            ordenar(pessoa, &contador);
        }
        else if(num == 0)
        {
            break;
        }
    }
    
}

void Agenda()
{
    printf("----- AGENDA -----\n");
    printf("[1] LISTAR\n");
    printf("[2] CADASTRAR\n");
    printf("[3] EDITAR\n");
    printf("[4] EXCLUIR\n");
    printf("[5] ORDENAR POR NOME\n");
    printf("[0] SAIR\n");
}

void cadastrar(struct Pessoa *pessoa, int *contador)
{
    int maior = 0;
    
    if(*contador < 10)
    {
        printf("---- CADASTRAR ----\n");
        
        if(*contador == 0)
        {
            pessoa[*contador].codigo = 1;
        }
        else
        {
            for (int i = 0; i < 10; i++)
            {
                if (pessoa[i].codigo > maior)
                {
                    maior = pessoa[i].codigo; 
                }
            }
            
            pessoa[*contador].codigo = maior + 1;
        }
        
        printf("Nome: ");
        scanf("%s", pessoa[*contador].nome);
        printf("Telefone: ");
        scanf("%d", &pessoa[*contador].telefone);
        
        (*contador)++; 
    }
    else 
    {
        printf("A agenda está cheia!");
    }
    
}

void listar (struct Pessoa *pessoa, int contador)
{
    printf("----- LISTAR -----\n");
    for(int i = 0; i < contador; i++)
    {
        printf("Código: %d\n", pessoa[i].codigo);
        printf("Nome: %s\n", pessoa[i].nome);
        printf("Telefone: %d\n", pessoa[i].telefone);
        printf("\n");
    }
}

void editar (struct Pessoa *pessoa, int contador)
{
    int cod, encont = 0;
    char nome[10];
    
    printf("----- EDITAR -----\n");
    printf("Digite o código ou nome da pessoa: ");
    if(scanf("%d", &cod) == 1)
    {
        for(int i = 0; i < contador; i++)
        {
            if(pessoa[i].codigo == cod)
            {
                printf("\n");
                printf("Dados encontrados: \n");
                printf("Código: %d\n", pessoa[i].codigo);
                printf("Nome: %s\n", pessoa[i].nome);
                printf("Telefone: %d\n", pessoa[i].telefone);
                printf("\n");
                printf("Editar dados: \n");
                printf("Nome: ");
                scanf("%s", pessoa[i].nome);
                printf("Telefone: ");
                scanf("%d", &pessoa[i].telefone);
                encont++;
                
                break;
            }
        }
    }
    else 
    {
        scanf("%s", nome);
        for(int i = 0; i < contador; i++)
        {
            if(strcmp(pessoa[i].nome, nome) == 0)
            {
                printf("\n");
                printf("Dados encontrados: \n");
                printf("Código: %d\n", pessoa[i].codigo);
                printf("Nome: %s\n", pessoa[i].nome);
                printf("Telefone: %d\n", pessoa[i].telefone);
                printf("\n");
                printf("Editar dados: \n");
                printf("Nome: ");
                scanf("%s", pessoa[i].nome);
                printf("Telefone: ");
                scanf("%d", &pessoa[i].telefone);
                encont++;
                
                break;
            }
        }
    }
    
    if(encont == 0)
    {
        printf("\n");
        printf("Pessoa não cadastrada!");
        printf("\n");
    }
}

void excluir (struct Pessoa *pessoa, int *contador)
{
    int cod, encont = 0;
    char nome[10];
    
    printf("----- EXCLUIR -----\n");
    printf("Digite o código ou nome da pessoa que deseja excluir: ");
    if(scanf("%d", &cod) == 1)
    {
        for(int i = 0; i < *contador; i++)
        {
            if(pessoa[i].codigo == cod)
            {
                printf("\n");
                printf("Pessoa excluída!");
                printf("\n");
                
                for(int j = i; j < *contador - 1; j++)
                {
                    pessoa[j] = pessoa[j + 1];    
                }
                
                (*contador)--;
                encont++;
                
                break;
            }
        }
    }
    else 
    {
        scanf("%s", nome);
         for(int i = 0; i < *contador; i++)
        {
            if(strcmp(pessoa[i].nome, nome) == 0)
            {
                printf("\n");
                printf("Pessoa excluída!");
                printf("\n");
                
                for(int j = i; j < *contador - 1; j++)
                {
                    pessoa[j] = pessoa[j + 1];    
                }
                
                (*contador)--;
                encont++;
                
                break;
            }
        }
    }
    if(encont == 0)
    {
        printf("\n");
        printf("Pessoa não cadastrada!");
        printf("\n");
    }
}

void ordenar (struct Pessoa *pessoa, int *contador) 
{
    struct Pessoa aux; 
    
    for (int i = 0; i < *contador; i++)
    {
        for (int j = 0; j < *contador - 1; j++) 
        {
            if(strcmp(pessoa[j].nome, pessoa[j + 1].nome) > 0)
            {
                aux = pessoa[j];
                pessoa[j] = pessoa[j + 1];
                pessoa[j + 1] = aux;
            }
        }
    }
    
    listar(pessoa, *contador);
}

