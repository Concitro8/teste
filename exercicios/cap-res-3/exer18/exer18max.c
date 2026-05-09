#include <stdio.h>
int main()
{
   float peso_saco, racao_gato1, racao_gato2, total_final;

   printf("Qual o peso do saco de racao:\n");
   scanf("%f%*c",&peso_saco);
   printf("QUANTIDADE RACAO GATO 1:\n");
   scanf("%f%*c",&racao_gato1);
   printf("QUANTIDADE RACAO GATO 2:\n");
   scanf("%f%*c",&racao_gato2);

   racao_gato1 = racao_gato1 / 1000;

   racao_gato2 = racao_gato2 / 1000;

   total_final = peso_saco - 5 * (racao_gato1 + racao_gato2);

   printf("A racao que resta e de: %.2f\n",total_final);
  
      return 0;
}