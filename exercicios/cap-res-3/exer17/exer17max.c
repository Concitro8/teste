#include <stdio.h>
int main()
{
   float salario,cheque1,cheque2,cpmf1,cpmf2,saldo;

   printf("Qual o seu salario:\n");
   scanf("%f%*c",&salario);
   printf("VALOR DO CHEQUE 1:\n");
   scanf("%f%*c",&cheque1);
   printf("VALOR DO CHEQUE 2:\n");
   scanf("%f%*c",&cheque2);

   cpmf1 = cheque1 * 0.38 / 100;

   cpmf2 = cheque2 * 0.38 / 100;

   saldo = salario - cheque1 - cheque2 - cpmf1 - cpmf2; 

   printf("O SEU SALDO E: %.2f\n",saldo);
  
      return 0;
}