#include <stdio.h>
int main()
{
   float nota1,nota2,nota3,media;

   printf("Digite suas notas:\n"); 
   printf("Nota 1:");
   scanf("%f%*c",&nota1);
   printf("Nota 2:");
   scanf("%f%*c",&nota2);
   printf("Nota 3:");
   scanf("%f%*c",&nota3);

   media = (nota1 + nota2 + nota3) / 3;

   printf("A media foi %.2f\n",media);

     return 0;
}