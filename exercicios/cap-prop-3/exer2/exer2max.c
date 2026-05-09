#include <stdio.h>
int main()
{
   float num1,num2,num3,multiplicacao;

   printf("Saiba o valor da multiplicacao de 3 numeros:\n");
   printf("Numero 1:");
   scanf("%f%*c",&num1);
   printf("Numero 2:");
   scanf("%f%*c",&num2);
   printf("Numero 3:");
   scanf("%f%*c",&num3);

   multiplicacao = num1 * num2 * num3;

   printf("O valor sera: %.2f\n",multiplicacao);

      return 0;
}