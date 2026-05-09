#include <stdio.h>
int main()
{
   float numero1,numero2,primaoseg,segaoprim;

   printf("Digite dois numeros maiores que zero:\n");
   printf("Primeiro numero:\n");
   scanf("%f%*c",&numero1);
   printf("Segundo numero:\n");
   scanf("%f%*c",&numero2);

   primaoseg = pow(numero1,numero2);

   segaoprim = pow(numero2,numero1);

   printf("O primeiro numero elevado ao segundo sera: %.2f\n",primaoseg);
   printf("O segundo numero elevado ao primeiro sera: %.2f\n",segaoprim);

      return 0;
}