#include <stdio.h>
int main()
{
   int ano_atual, ano_nascimento, idade_atual, idade_2050;

   printf("Qual o ano atual:\n");
   scanf("%d%*c",&ano_atual);
   printf("Qual o ano do seu nascimento:\n");
   scanf("%d%*c",&ano_nascimento);

   idade_atual = ano_atual - ano_nascimento;

   idade_2050 = 2050 - ano_nascimento;

   printf("Sua idade atual e: %d\n",idade_atual);
   printf("Sua idade em 2050 sera: %d\n",idade_2050);

      return 0;
}