#include <stdio.h>
int main()
{
   float horas_trabalhadas,valor_trab,valor_extras,valor_salario,horas_extras,
   salario_receber,salario_bruto,receber_extras;

   printf("Veja seu salario a receber de acordo com as horas extras trabalhadas\n");
   printf("Qual as horas trabalhadas: ");
   scanf("%f%*c",&horas_trabalhadas);
   printf("Qual o valor do salario minimo: ");
   scanf("%f%*c",&valor_salario);
   printf("Qual as horas extras trabalhadas: ");
   scanf("%f%*c",&horas_extras);
     
   valor_trab = valor_salario / 8;
   
   valor_extras = valor_salario / 4;

   salario_bruto = horas_trabalhadas * valor_trab;

   receber_extras = horas_extras * valor_extras;

   salario_receber = salario_bruto + receber_extras;
   
   printf("O salario a receber sera de: %.2f\n",salario_receber);


      return 0;
}