#include <stdio.h>
int main()
{
   int dia1,mes1,ano1,dia2,mes2,ano2,comparacao;

   printf("Digite a primeira data\n");
   printf("dia(dd): ");
   scanf("%d%*c",&dia1);
   printf("mes(mm): ");
   scanf("%d%*c",&mes1);
   printf("ano(aaaa): ");
   scanf("%d%*c",&ano1);
   
   printf("Digite a segunda data\n");
   printf("dia(dd): ");
   scanf("%d%*c",&dia2);
   printf("mes(mm): ");
   scanf("%d%*c",&mes2);
   printf("ano(aaaa): ");
   scanf("%d%*c",&ano2);

   if (ano1 > ano2)
   {
     printf("A maior data e: %d - %d - %d\n",dia1,mes1,ano1);
   }  
   else if (ano2 > ano1)
   {
     printf("A maior data e: %d - %d - %d\n",dia2,mes2,ano2);
   }
   else if (mes1 > mes2)
   {
     printf("A maior data e: %d - %d - %d\n",dia1,mes1,ano1);
   }
   else if (mes2 > mes1)
   {
     printf("A maior data e: %d - %d - %d\n",dia2,mes2,ano2);
   }
   else if (dia1 > dia2)
   {
     printf("A maior data e: %d - %d - %d\n",dia1,mes1,ano1);
   }
   else if (dia2 > dia1)
   {
     printf("A maior data e: %d - %d - %d\n",dia2,mes2,ano2);
   }
   else
   {
     printf("As datas sao iguais!\n");
   }

      return 0;
}