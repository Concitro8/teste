#include <stdio.h>
int main()
{
   float dimensao1,dimensao2,area,potencia;

   printf("Saiba quantos W serao necessarios para iluminar corretamente o comodo\n");
   printf("Qual o tamanho da primeira parede(em metros): ");
   scanf("%f%*c",&dimensao1);
   printf("Qual o tamanho da segunda parede(em metros): ");
   scanf("%f%*c",&dimensao2);
   
   area = dimensao1 * dimensao2;

   potencia = area * 18; 
   
   printf("A area do comodo e de: %.2f metros\n",area);
   printf("A potencia necessaria sera de: %.2fW\n",potencia);


      return 0;
}