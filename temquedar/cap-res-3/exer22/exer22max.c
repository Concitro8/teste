#include <stdio.h>
int main()
{
   float vlr_sal, qtd_kw, vlr_kw, vlr_reais, desc, vlr_desc;

   printf("Qual o valor do salario minimo:\n");
   scanf("%f%*c",&vlr_sal);
   printf("Qual a quantidade de quilowatts consumida:\n");
   scanf("%f%*c",&qtd_kw);

   vlr_kw = vlr_sal /5;

   vlr_reais = vlr_kw * qtd_kw;

   desc = vlr_reais * 15 /100;

   vlr_desc = vlr_reais - desc;

   printf("O valor de cada quilowatt sera: %.2f\n",vlr_kw);
   printf("O valor a ser pago sera: %.2f\n",vlr_reais);
   printf("O valor com desconto sera: %.2f\n",vlr_desc);


      return 0;
}