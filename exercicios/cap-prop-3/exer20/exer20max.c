#include <stdio.h>
#include <math.h>
int main()
{
   float angulo,distancia,escada;

   printf("Saiba qual o tamanho necessario para a escada cumprir seu objetivo\n");
   printf("Qual o angulo: ");
   scanf("%f%*c",&angulo);
   printf("Qual a distancia da escada ate a parede: ");
   scanf("%f%*c",&distancia);
     
   escada = distancia / cos((3.14 * angulo) / 180);
   
   printf("O tamanho da escada deve ser de: %.2f (graus ou radianos,dependendo do valor do angulo dado)\n",escada);


      return 0;
}