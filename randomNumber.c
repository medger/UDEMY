#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    srand((unsigned)time(NULL));
    
    //variavel recebe o resto da divisão do numero 3 (aleatório entre 0 e 2)
    /*int random=rand() %3;
        printf("\n%d",random);*/
        
    //variavel recebe o resto da divisão do numero 3 (aleatório entre 1 e 3)
    int random=(rand() %3)+1;
        printf("\n%d",random);
}