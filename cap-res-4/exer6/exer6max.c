#include <stdio.h>
int main()
{
   int num,r;

   printf("Digite um numero: ");
   scanf("%d%*c",&num);

   r = num % 2;

   if (r == 0)
   {
      printf("O numero e par\n");
   }
   else 
   {
   printf("O numero e impar\n");
   }   

      return 0;
}