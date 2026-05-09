#include <stdio.h>
int main()
{
   float salario,salarioareceber,gratificacao,imposto;
   
   printf("Digite seu salario:\n");
   scanf("%f%*c",&salario);

   gratificacao = salario * 5/100;

   imposto = salario * 7/100;

   salarioareceber = salario + gratificacao - imposto;

   printf("Seu salario a receber sera de:%.2f\n",salarioareceber);


     return 0;
}