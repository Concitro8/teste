#include <stdio.h>
int main()
{
   float valor,novo_valor;

   printf("Digite um valor para saber o \npreco apos um desconto de 10 por cento:\n");
   scanf("%f%*c",&valor);

   novo_valor = valor * 10 / 100;

   novo_valor = valor - novo_valor;

   printf("O preco apos o desconto sera de: %.2f\n",novo_valor);

      return 0;
}