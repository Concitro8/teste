#include <stdio.h>
int main()
{
   float reais,dolares,marco_alemao,libra_esterlina;

   printf("Veja os valores de conversao do real para outras moedas\n");
   printf("Quantos reais voce possui: ");
   scanf("%f%*c",&reais);
     
   dolares = reais / 1.80;

   marco_alemao = reais / 2.00;

   libra_esterlina = reais / 3.57;
   
   printf("Voce possui %.2f dolares\n",dolares);
   printf("Voce possui %.2f marcos alemoes\n",marco_alemao);
   printf("Voce possui %.2f libras esterlinas\n",libra_esterlina);


      return 0;
}