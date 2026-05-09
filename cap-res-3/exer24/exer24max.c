#include <stdio.h>
int main()
{
   float hora,hora_sem_minuto,minutos,conversao;

   printf("Qual as horas:\n");
   scanf("%f%*c",&hora);

   hora_sem_minuto = (int)hora;

   minutos = hora - hora_sem_minuto;

   conversao = (hora_sem_minuto * 60) + (minutos * 100);

   

   printf("O tempo em minutos sera: %.0f\n",conversao);


      return 0;
}