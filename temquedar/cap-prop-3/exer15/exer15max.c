#include <stdio.h>
int main()
{
   float salario,conta1,conta2,multa1,multa2,novo_salario;

   printf("Veja seu salario apos pagar as contas\n");
   printf("Qual seu salario: ");
   scanf("%f%*c",&salario);
   printf("Qual o valor da primeria conta:");
   scanf("%f%*c",&conta1);
   printf("Qual o valor da segunda conta:");
   scanf("%f%*c",&conta2);

   multa1 = conta1 + conta1 * 2 / 100;

   multa2 = conta2 + conta2 * 2 / 100;

   novo_salario = salario - (multa1 + multa2);
   
   printf("Restara %.2f do seu salario\n",novo_salario);

      return 0;
}