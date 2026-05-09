#include<stdio.h>
int main()
{
  float nota1,nota2,nota3,peso1,peso2,peso3,media; 

   printf("Digite suas notas e pesos:\n"); 
   printf("Nota 1:");
   scanf("%f%*c",&nota1);
   printf("Nota 2:");
   scanf("%f%*c",&nota2);
   printf("Nota 3:");
   scanf("%f%*c",&nota3);
   printf("Peso 1:");
   scanf("%f%*c",&peso1);
   printf("Peso 2:");
   scanf("%f%*c",&peso2);
   printf("Peso 3:");
   scanf("%f%*c",&peso3);

   media = (nota1*peso1 + nota2*peso2 + nota3*peso3) / (peso1 + peso2 + peso3);

   printf("A media foi %.2f\n",media);

     return 0;
}