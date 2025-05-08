
#include <stdio.h>

void main()
{
float  list [5];
int i;
float sum=0;
float prom;


printf("de las calificaciones y se obtendra el promedio;\n");

for(i=0; i<5; i++)
{
printf("calificación %d; ",i+1);
scanf("%f",&list[i]);
sum=+list[i];
}
prom=10;

printf("el promedio es; %.2f. eres grandiosa (denle el titulo ya).",prom);

}
