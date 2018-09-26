#include<stdio.h>
#include<stdlib.h>

int main()
{
    int lin,col, i,j;
    //ponteiro de ponteiro
    int **matriz; 
    
    printf("\nDigite o número de linhas: ");
    scanf("%d",&lin);
    printf("\nDigite o número de colunas: ");
    scanf("%d",&col);
    
    //alocando as linhas
    matriz=(int**)malloc(lin*sizeof(int*));
    
    //alocando memória para as colunas de cada linha
    for(i=0;i<lin;i++)
    {
        matriz[i]=(int*)malloc(col*sizeof(int));
    }
    
    //preenchendo valores e exibindo a matriz
    for(i=0;i<lin;i++)
    {
        for(j=0;j<col;j++)
        {
            matriz[i][j]=i;
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    
free(matriz);
return 0;
}