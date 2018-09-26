#include<stdio.h>
#include<stdlib.h>

typedef struct Data
{
    int dia;
    int mes;
    int ano;
}Data;

struct Aluno
{
    Data nascimento;
};

int main()
{
    struct Aluno aluno1;
    
    aluno1.nascimento.ano=1989;
    aluno1.nascimento.mes=01;
    aluno1.nascimento.dia=17;
    
    printf("Nascido em: %d/%d/%d", aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);
    
return 0;
}
