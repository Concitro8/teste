#include <stdio.h>
int main()
{
   float altura, distancia ,escada;

   printf("Qual o tamanho da escada:\n");
   scanf("%f%*c",&escada);
   printf("Qual a altura:\n");
   scanf("%f%*c",&altura);

   distancia = (escada * escada) - (altura * altura);

   distancia = sqrt(distancia) * sqrt(distancia);

   printf("A distancia da escada pra parede e: %.2f\n",distancia);
  
      return 0;
}