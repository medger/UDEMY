#include<stdio.h>
#include<stdlib.h>

int* alocavetor(int tam)
{
    int *aux;
    
    //alocação dinâmica de memória
    aux=(int*)malloc(tam*sizeof(int));
    return aux;
}

int main()
{
    int *vetor, i, tam;
    printf("Digite um tamanho para o vetor: \n");
    scanf("%d", &tam);
    
    printf("Digite os números para preencher o vetor: \n");
    
    vetor=alocavetor(tam);
    for(i=0;i<tam;i++)
    {
        scanf("%d",&vetor[i]);
    }
    for(i=0;i<tam;i++)
    {
        printf("\n%d",vetor[i]);
    }
return 0;
}