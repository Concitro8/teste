#include <stdio.h>
#include <math.h>
int main()
{
   float ang, alt, escada, radiano;

   printf("Qual a angulo(em graus):\n");
   scanf("%f%*c",&ang);
   printf("Qual a altura:\n");
   scanf("%f%*c",&alt);

   radiano = ang * 3.14 / 180;

   escada = alt / sin(radiano);

   printf("A medida da escada e: %.2f\n",escada);
  
      return 0;
}