#include <stdio.h>
#include <math.h>
int main()
{
   float numero,aoquadrado,aocubo,raiz2,raiz3;

   printf("Digite um numero positivo:\n");
   scanf("%f%*c",&numero);

   aoquadrado = numero * numero;

   aocubo = numero * numero * numero;

   raiz2 = sqrt(numero);

   raiz3 = cbrt(numero);

   printf("O numero ao quadrado e: %.2f\n",aoquadrado);
   printf("O numero ao cubo e: %.2f\n",aocubo);
   printf("A raiz quadrada do numero e: %.2f\n",raiz2);
   printf("A raiz cubica do numero e: %.2f\n",raiz3);

      return 0;
}