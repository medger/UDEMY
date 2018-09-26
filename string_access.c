#include<stdio.h>
#include<string.h>
void main()
{
    char str[255];
    
    setbuf(stdin,0);
    fgets(str,255,stdin);
    
    printf("O nome é: %s", str);
}