#include <stdio.h>
int main()
{
   float num_lados,num_diagonais;

   printf("Saiba quantas diagonais tem um poligono convexo\n");
   printf("Quantos lados tem esse poligono: ");
   scanf("%f%*c",&num_lados);
     
   num_diagonais = num_lados * (num_lados - 3) / 2;
   
   printf("O poligono possui %.0f diagonais\n",num_diagonais);


      return 0;
}