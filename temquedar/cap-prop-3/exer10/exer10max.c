#include <stdio.h>
int main()
{
   float lado1,lado2,area;

   printf("Descubra a area do quadrado\n");
   printf("Valor do lado 1: ");
   scanf("%f%*c",&lado1);
   printf("Valor do lado 2: ");
   scanf("%f%*c",&lado2);

   area = lado1 * lado2;

   printf("A area do quadrado sera de: %.2f\n",area);


      return 0;
}