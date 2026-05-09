#include <stdio.h>
int main()
{
    int   I;
    float A,B,C;

   printf("Digite um valor para A: ");
   scanf("%f%*c",&A);
   printf("Digite um valor para B: ");
   scanf("%f%*c",&B);
   printf("Digite um valor para C: ");
   scanf("%f%*c",&C);
   printf("Digite um valor para I (1, 2 ou 3): ");
   scanf("%d%*c",&I);


   if (I == 1)
   {
      if (A < B && A < C)
      {
         if (B < C)
         {
           printf("A ordem crescente dos numeros e: %.2f - %.2f - %.2f\n",A,B,C);
         }
         else
         {
           printf("A ordem crescente dos numeros e: %.2f - %.2f - %.2f\n",A,C,B); 
         }
      }
      if (B < A && B < C)
      {
         if (A < C)
         {
           printf("A ordem crescente dos numeros e: %.2f - %.2f - %.2f\n",B,A,C);
         }
         else
         {
           printf("A ordem crescente dos numeros e: %.2f - %.2f - %.2f\n",B,C,A); 
         }
      }
      if (C < A && C < B)
      {
         if (A < B)
         {
           printf("A ordem crescente dos numeros e: %.2f - %.2f - %.2f\n",C,A,B);
         }
         else
         {
           printf("A ordem crescente dos numeros e: %.2f - %.2f - %.2f\n",C,B,A); 
         }
      }   
   }
   
   
   if (I == 2)
   {
      if (A > B && A > C)
      {
         if (B > C)
         {
           printf("A ordem decrescente dos numeros e: %.2f - %.2f - %.2f\n",A,B,C);
         }
         else
         {
           printf("A ordem decrescente dos numeros e: %.2f - %.2f - %.2f\n",A,C,B); 
         }
      }
      if (B > A && B > C)
      {
         if (A > C)
         {
           printf("A ordem decrescente dos numeros e: %.2f - %.2f - %.2f\n",B,A,C);
         }
         else
         {
           printf("A ordem decrescente dos numeros e: %.2f - %.2f - %.2f\n",B,C,A); 
         }
      }
      if (C > A && C > B)
      {
         if (A > B)
         {
           printf("A ordem decrescente dos numeros e: %.2f - %.2f - %.2f\n",C,A,B);
         }
         else
         {
           printf("A ordem decrescente dos numeros e: %.2f - %.2f - %.2f\n",C,B,A); 
         }
      }   
   }


    if (I == 3)
    {
      if (A > B && A > C)
      {
         printf("A ordem desejada e: %.2f - %.2f - %.2f\n",B,A,C); 
      }
      if (B > A && B > C)
      {
         printf("A ordem desejada e: %.2f - %.2f - %.2f\n",A,B,C); 
      }
      if (C > A && C > B)
      {
         printf("A ordem desejada e: %.2f - %.2f - %.2f\n",A,C,B); 
      }
    } 

      return 0;
}