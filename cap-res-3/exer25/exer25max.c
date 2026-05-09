#include <stdio.h>
int main()
{
   float valor_espetaculo,convites,qnt_necessaria;

   printf("Quanto custou para fazer o espetaculo:\n");
   scanf("%f%*c",&valor_espetaculo);
   printf("Qual o preco do convite:\n");
   scanf("%f%*c",&convites);

   qnt_necessaria = valor_espetaculo / convites;

   printf("A quantidade de convites vendidos para pagar o custo sera: %.2f\n",qnt_necessaria);


      return 0;
}