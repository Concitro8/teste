#include <stdio.h>
int main()
{
   float num1,num2,equacao;

   printf("Saiba o valor de X - Y:\n");
   printf("X:");
   scanf("%f%*c",&num1);
   printf("Y:");
   scanf("%f%*c",&num2);

   equacao = num1 - num2;
   
   printf("O valor sera: %.2f\n",equacao);


     return 0;
} 