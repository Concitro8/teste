#include <stdio.h>
int main() 
{
   float num1,num2,divisao;

   printf("Saiba o valor da divisao de X por Y:\n");
   printf("X:");
   scanf("%f%*c",&num1);
   printf("Y(diferente de 0):");
   scanf("%f%*c",&num2);

   if (num2!=0)
{
   divisao = num1 / num2;
   printf("O valor sera: %.2f\n",divisao);
}
   else printf("Erro na divisao\n");

    
      return 0;
}