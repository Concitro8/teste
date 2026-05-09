#include <stdio.h>
int main()
{
   float pes,polegadas,jardas,milhas;

   printf("Digite um numero em pes:\n");
   scanf("%f%*c",&pes);

   polegadas = pes * 12;

   jardas = pes / 3;

   milhas = jardas / 1760;

   printf("Conversao para polegadas: %.2f\n",polegadas);
   printf("Conversao para jardas: %.2f\n",jardas);
   printf("Conversao para milhas: %.4f\n",milhas);

      return 0;
}