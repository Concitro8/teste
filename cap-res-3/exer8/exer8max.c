#include <stdio.h>
int main()
{
   float deposito,taxa,rendimento,total;

   printf("Valor do deposito:\n");
   scanf("%f%*c",&deposito);
   printf("Valor da taxa:\n");
   scanf("%f%*c",&taxa);

   rendimento = deposito * taxa/100;

   total = deposito + rendimento;

   printf("O seu rendimento sera de :%.2f\n",rendimento);
   printf("O total sera de : %.2f\n",total);


     return 0;
}