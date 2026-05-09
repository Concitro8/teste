#include <stdio.h>
int main()
{
   float ang1,ang2,ang3;

   printf("Descubra o valor do terceiro angulo de um triangulo\n");
   printf("Qual o valor do primeiro angulo(em graus): ");
   scanf("%f%*c",&ang1);
   printf("Qual o valor do segundo angulo(em graus): ");
   scanf("%f%*c",&ang2);
     
   ang3 = 180 - (ang1 + ang2);
   
   printf("O valor do terceiro angulo e de %.2f graus\n",ang3);


      return 0;
}