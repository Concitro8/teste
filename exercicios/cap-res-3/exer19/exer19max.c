#include <stdio.h>
int main()
{
   float altura_degrau,altura_desejada,quantidade_degraus;

   printf("Qual a altura do degrau(em metros):\n");
   scanf("%f%*c",&altura_degrau);
   printf("Qual a altura que voce deseja alcancar(em metros):\n");
   scanf("%f%*c",&altura_desejada);

   quantidade_degraus = altura_desejada / altura_degrau;

   printf("Voce devera subir %.0f degraus\n",quantidade_degraus);
  
      return 0;
}