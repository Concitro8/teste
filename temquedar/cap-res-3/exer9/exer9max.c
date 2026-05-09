#include <stdio.h>
int main()
{
   float base,altura,area;

   printf("BASE:\n");
   scanf("%f%*c",&base);
   printf("ALTURA:\n");
   scanf("%f%*c",&altura);

   area = (base * altura) / 2;

   printf("A area do triangulo e: %.2f\n",area);

      return 0;
}