#include <stdio.h>
int main()
{
    float salario,salarioareceber,gratificacao,imposto;
   
   printf("Digite seu salario:\n");
   scanf("%f%*c",&salario);

   imposto = salario * 10/100;

   salarioareceber = salario + 50 - imposto;

   printf("Seu salario a receber sera de:%.2f\n",salarioareceber);

     return 0;
}