#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define tam 10

void imprimeVetor(int vetor[tam])
{
    int i;
     for(i=0;i<tam;i++)
    {
        printf("[%d] ",vetor[i]);
    }
}

void bubble_sort(int vetor[tam])
{
    int x,y,aux;
    //valor da esquerda sendo analisado;
    for(x=0;x<tam;x++){
        //valor da direita sendo analisado;
        for(y=x+1;y<tam;y++)
        {
            if(vetor[x]>vetor[y])
            {
                aux=vetor[x];
                vetor[x]=vetor[y];
                vetor[y]=aux;
            }
        }
    }
    
}
int main()
{
    int vetor[tam]={10,9,8,7,6,5,4,3,2,1};
    
    bubble_sort(vetor);
    
    imprimeVetor(vetor);
return 0;
}