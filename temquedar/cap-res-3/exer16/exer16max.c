#include <stdio.h>
int main()
{
   float horas_t, vlr_sal_min, vlr_hora_t, 
         vlr_sal_bru, imp, vlr_sal_liq;

   printf("Quanto sao as horas trabalhadas:\n");
   scanf("%f%*c",&horas_t);
   printf("Qual o valor do salario minimo:\n");
   scanf("%f%*c",&vlr_sal_min);

   vlr_hora_t = vlr_sal_min / 2;

   vlr_sal_bru = vlr_hora_t * horas_t;

   imp = vlr_sal_bru * 3 / 100;

   vlr_sal_liq = vlr_sal_bru - imp;

   printf("O valor do salario liquido sera: %.2f\n",vlr_sal_liq);
  
      return 0;
}