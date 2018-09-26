#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define tam 10

void fila_construtor(int *frente, int *tras)
{
    *frente=0; //não tem ninguém na fila
    *tras=-1; //indica que não tem nenhum espaço entre eles
}

void fila_enfileirar(int fila[tam], int valor, int *tras)
{
    if(*tras==tam-1)
    {
        printf("\nFila cheia!");
    }
    else
    {
        *tras++;
        fila[*tras]=valor;
    }
    
}

void imprimeVetor(int vetor[tam], int tamanho)
{
    int i;
     for(i=0;i<tam;i++)
    {
        printf("[%d] ",vetor[i]);
    }
}
int fila_tamanho(int tras, int frente)
{
    return (tras-frente)+1;
}

int main()
{
    int fila[tam]={0,0,0,0,0,0,0,0,0,0}, frente, tras, valor;
    
    fila_construtor(&frente, &tras);
    
    fila_enfileirar(fila,7, &tras);
    fila_enfileirar(fila,8, &tras);

    imprimeVetor(fila,fila_tamanho(tras,frente));
    
return 0;
}