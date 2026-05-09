#include <stdio.h>
#include <math.h>
int main()
{
   float raio,comprimento,area,volume;

   printf("Descubra os valores de uma esfera\n");
   printf("Qual o raio da esfera: ");
   scanf("%f%*c",&raio);
   
   comprimento = 2 * 3.14 * raio;

   area = 3.14 * pow(raio,2);

   volume = 0.75 * 3.14 * pow(raio,3);
   
   printf("O comprimento da esfera e: %.2f\n",comprimento);
   printf("A area da esfera e: %.2f\n",area);
   printf("O volume da esfera e: %.2f\n",volume);


      return 0;
}