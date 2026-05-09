#include <stdio.h>
int main()
{
   float horas,minutos,pra_minutos,total,segundos;

   printf("Que horas sao: ");
   scanf("%f%*c",&horas);
   printf("Qais os minutos: ");
   scanf("%f%*c",&minutos);
     
   pra_minutos = horas * 60;

   total = minutos + pra_minutos;

   segundos = total * 60;
   
   printf("A hora convertida pra minutos sera: %.2f\n",pra_minutos);
   printf("O total de minutos sera: %.2f\n",total);
   printf("O total convertido para segundo equivale a: %.2f\n",segundos);


      return 0;
}