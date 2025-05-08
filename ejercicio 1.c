Dado una lista de 5 enteros, imprimir la lista 
#include <stdio.h>

void main()
{
int list [5]= {57,73,24,12,20};
int i;

printf("la lista es;\n");

for(i=0; i<5; i++)
{
    printf("%d, ",list[i]);
}
printf("\n");

}
