#include <stdio.h>
int main()
{
   float peso,engordar,emagrecer;

   printf("Qual o seu peso:\n");
   scanf("%f%*c",&peso);

   engordar = peso * 15 / 100;
   engordar = engordar + peso;

   emagrecer = peso * 20 / 100;
   emagrecer = peso - emagrecer;

   printf("Seu peso,caso voce engorde 15 por cento: %.2f\n",engordar);
   printf("Seu peso,caso voce emagreca 20 por cento: %.2f\n",emagrecer);


      return 0;
}