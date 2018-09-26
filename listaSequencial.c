#include<stdio.h>
#include<stdlib.h>
#define tam 3

int *alocavetor(int tam)
{
    //ponteiro auxiliar
    int *v;
    //aloca memória para novo vetor
    v=(int *)malloc(tam*sizeof(int));
    return v;
    
}

void imprimeSequencial(int vetor[])
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("[%d]",vetor[i]);
    }
}

int main()
{
    int vetor[tam]={1,2,3},tamanhoLista;
    
    imprimeSequencial(vetor);
return 0;
}