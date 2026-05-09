#include <stdio.h>
int main()
{
   float base_maior,base_menor,altura,area;

   printf("Descubra a area do trapezio\n");
   printf("Valor da base maior: ");
   scanf("%f%*c",&base_maior);
   printf("Valor da menor: ");
   scanf("%f%*c",&base_menor);
   printf("Valor da altura: ");
   scanf("%f%*c",&altura);

   if (base_maior > base_menor)
{
   area = ((base_maior + base_menor) * altura) / 2;

   printf("A area do trapezio e de: %.2f\n",area);
}
   else printf("A base menor nao pode ter valor maior que a base maior!\n");

      return 0;
}