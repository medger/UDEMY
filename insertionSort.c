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

void insertion_sort(int vetor[tam])
{
    int i,j,atual;
    
    for(i=1;i<tam;i++)//i começa 1 casa a frente;
    {
        //elemento atual em análise
        atual=vetor[i];
        //elemento anterior em análise
        j=i-1;
        while(j>=0)
        {
            vetor[j+1]
            //faz o j andar pra trás
            j=j-1;
        }
    }
    
}
int main()
{
    int vetor[tam]={10,9,8,7,6,5,4,3,2,1};
    
    insertion_sort(vetor);
    
    imprimeVetor(vetor);
return 0;
}