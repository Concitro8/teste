#include <stdio.h>
#include <math.h>
int main()
{
   float num1,num2,soma,raiz,op;

   printf(" \tMENU\n");
   printf("1 - Somar dois numeros\n");
   printf("2 - Raiz quadrade de um numero\n");
   printf("Digite sua opcao:");
   scanf("%f%*c",&op);

   if (op == 1)
   {
     printf("Digite um valor para o primeiro numero:\n");
     scanf("%f%*c",&num1);
     printf("Digite um valor para o segundo numero:\n");
     scanf("%f%*c",&num2);

     soma = num1 + num2;

     printf("A soma de %.2f e %.2f da %.2f\n",num1,num2,soma);
   }

   if (op == 2)
   {
     printf("Digite um valor:\n");
     scanf("%f%*c",&num1);

     raiz = sqrt(num1);

     printf("A raiz quadrada de %.2f da %.2f\n",num1,raiz);
   }

   if (op != 1 && op != 2)
   {
     printf("Opcao invalida!\n");
   }
   


      return 0;
}