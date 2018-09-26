//Só funciona em busca SEQUENCIAL
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define tam 6

int imprimeVetor(int vet[tam])
{
    int i;
    
    for(i=0;i<tam;i++)
    {
        printf("[%d] ",vet[i]);
    }
    
}

int buscaBin(int vetor[tam], int valorProcurado, int *posicaoEncontrada)
{
    int esquerda=0;
    int direita=tam-1;
    int meio;
    
    while(esquerda<=direita)
    {
        //encontra o meio da análise
        meio=(esquerda+direita)/2;
        //valor do meio é encontrado
        if(valorProcurado==vetor[meio])
        {
            *posicaoEncontrada=meio;
            return 1;
        }
        if(vetor[meio]<valorProcurado)
        {
            esquerda=meio+1; //faz com que o limite da esquerda, ande uma casa no vetor
        }
        else
        {
            direita=meio-1; //faz com que o limite da direita  volte uma casa no vetor
        }
    }
    return -1;

}

int main()
{
    int vetor[tam], valorProcurado, posicaoEncontrada, i;
    
    for(i=0;i<tam;i++)
    {
        printf("\nDigite o %d número: ",i+1);
        scanf("%d",&vetor[i]);
    }
    imprimeVetor(vetor);
    
    printf("\n\nQual número deseja procurar? ");
    scanf("\n%d", &valorProcurado);
    
    if(buscaBin(vetor, valorProcurado, &posicaoEncontrada)==1)
    {
        printf("\nValor encontrado na posição: %d",posicaoEncontrada);
    }
    else
    {
        printf("\nValor não encontrado");
    }
return 0;
}