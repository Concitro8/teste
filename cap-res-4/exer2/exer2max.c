#include <stdio.h>
int main()
{
   float nota1,nota2,nota3,media,nota_exame;

   printf("Digite a primeira nota: ");
   scanf("%f%*c",&nota1);
   printf("Digite a segunda nota: ");
   scanf("%f%*c",&nota2);
   printf("Digite a terceira nota: ");
   scanf("%f%*c",&nota3);

   media = (nota1 + nota2 + nota3) / 3;

   printf("Media aritmetica: %.2f\n",media);

   if (media >= 0 && media < 3)
    {
       printf("REPROVADO\n"); 
    }
   if (media >= 3 && media <7)
    {
       printf("EXAME\n");
       nota_exame = 12 - media;
       printf("Deve tirar nota %.2f para ser aprovado\n",nota_exame);
    } 
   if (media >= 7 && media <= 10)
    {
       printf("APROVADO\n"); 
    } 

      return 0;
}