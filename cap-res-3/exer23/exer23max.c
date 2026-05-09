#include <stdio.h>
int main()
{
   float numero,i,f,arredondamento;

   printf("Qual o numero real:\n");
   scanf("%f%*c",numero);

   i = (int)numero;

   f = numero - i;

   arredondamento = round(numero);

   printf("O valor inteiro sera: %.0f\n",i);
   printf("O valor fracionario sera: %.2f\n",f);
   printf("O valor arredondado: %.2f\n",arredondamento);


      return 0;
}