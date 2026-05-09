#include <stdio.h>
int main()
{
   float salario_minimo,salario_funcionario,comparacao;

   printf("Descubra quantos salarios minimos voce ganha\n");
   printf("Valor do seu salario: ");
   scanf("%f%*c",&salario_funcionario);
   printf("Valor do salario minimo: ");
   scanf("%f%*c",&salario_minimo);

   comparacao = salario_funcionario / salario_minimo;

   printf("Voce ganha %.2f salario(s) minimo(s)\n",comparacao);


      return 0;
}