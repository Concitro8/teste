#include <stdio.h>
#include <math.h>
int main()
{
   float cateto1,cateto2,hipotenusa;

   printf("Descubra a hipotenusa\n");
   printf("Valor do cateto 1: ");
   scanf("%f%*c",&cateto1);
   printf("Valor do cateto 2:");
   scanf("%f%*c",&cateto2);

   hipotenusa = pow(cateto1,2) + pow(cateto2,2);

   hipotenusa = sqrt(hipotenusa);
   
   printf("A hipotenusa e: %.2f\n",hipotenusa);

      return 0;
}