#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool retornaBooleano()
{
    return false;
}

int main()
{
   bool varBool;
   varBool=retornaBooleano();
   if(varBool)
   {
       printf("Verdadeiro");
   }
   else
   {
       printf("Falso");
   }
   
   
   return 0;
}