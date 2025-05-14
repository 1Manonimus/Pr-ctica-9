#include <stdio.h>

void main()
{
float  list [5];
int i;
float sum;
float prom=0;


printf("de las calificaciones y se obtendra el promedio;\n");

for(i=0; i<5; i++)
{
printf("calificación %d; ",i+1);
scanf("%f",&list[i]);
sum=prom+list[i];
prom=sum;

}
prom=prom/5;

printf("el promedio es; %.2f ",prom);

}
