#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define tam 4

int imprimeVetor(int vet[tam])
{
    int i;
    
    for(i=0;i<tam;i++)
    {
        printf("[%d] ",vet[i]);
    }
    
}

int buscaSimples(int vetor[tam], int valorProcurado, int *posicaoEncontrada)
{
    int cont;
    bool valorEncontrado;
    for(cont=0;cont<tam;cont++)
    {
        if(vetor[cont]==valorProcurado)
        {
            valorEncontrado = true;
            *posicaoEncontrada = cont;
        }
    }
    if(valorEncontrado)
        return 1;
    else
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
    
    if(buscaSimples(vetor, valorProcurado, &posicaoEncontrada)==1)
    {
        printf("\nValor encontrado na posição: %d",posicaoEncontrada);
    }
    else
    {
        printf("\nValor não encontrado");
    }
return 0;
}