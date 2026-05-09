#include <stdio.h>
int main()
{
   float ano_nascimento,ano_atual,anos,meses,dias,semanas;

   printf("Descubra sua idade em diversas convercoes\n");
   printf("Seu ano de nascimento: ");
   scanf("%f%*c",&ano_nascimento);
   printf("O ano atual: ");
   scanf("%f%*c",&ano_atual);

   anos = ano_atual - ano_nascimento;

   meses = anos * 12;

   dias = meses * 30;

   semanas = dias / 7;
   
    printf("Sua idade equivale a:\n");
   printf("%.0f anos\n",anos);
   printf("%.0f meses\n",meses);
   printf("%.0f dias\n",dias);
   printf("%.0f semanas\n",semanas);
   

      return 0;
}