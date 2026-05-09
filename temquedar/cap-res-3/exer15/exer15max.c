#include <stdio.h>
int main()
{
   float p_fab, perc_d, perc_i, vlr_d, vlr_i, p_final;

   printf("Qual o preco de fabrica:\n");
   scanf("%f%*c",&p_fab);
   printf("Qual o percentual do distribuidor:\n");
   scanf("%f%*c",&perc_d);
   printf("Qual o percentual dos impostos:\n");
   scanf("%f%*c",&perc_i);

   vlr_d = p_fab * perc_d / 100;

   vlr_i = p_fab * perc_i / 100;

   p_final = p_fab + vlr_d + vlr_i;

   printf("O valor correspondente ao lucro do distribuidor sera: %.2f\n",vlr_d);
   printf("O valor correspondente aos impostos sera: %.2f\n",vlr_i);
   printf("O preco final do veiculo sera: %.2f\n", p_final);

      return 0;
}