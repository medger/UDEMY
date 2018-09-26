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
   int posicaomenor, aux, i,j;
   
   for(i=0;i<tam;i++)
   {
       //recebe a posiçao inicial p o menor valor;
       posicaomenor=i;
       //analisa a posição na frente
       for(j=i+1;j<tam;j++)
       {
           //caso encontre um valor menor na frente dos analisados
           if(vetor[j]<vetor[posicaomenor])
           {
               posicaomenor=j;
           }
       }
       if(posicaomenor!=i)
       {
           aux=vetor[i];
           vetor[i]=vetor[posicaomenor];
           vetor[posicaomenor]=aux;
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