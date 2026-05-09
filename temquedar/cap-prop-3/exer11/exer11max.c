#include <stdio.h>
int main()
{
   float diagonal_maior,diagonal_menor,area;

   printf("Descubra a area do losango\n");
   printf("Valor da diagonal maior: ");
   scanf("%f%*c",&diagonal_maior);
   printf("Valor da diagonal menor: ");
   scanf("%f%*c",&diagonal_menor);

   area = (diagonal_maior * diagonal_menor) / 2;

   printf("A area do losango sera de: %.2f\n",area);


      return 0;
}