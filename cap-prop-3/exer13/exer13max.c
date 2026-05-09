#include <stdio.h>
int main()
{
   float numero,tab0,tab1,tab2,tab3,tab4,tab5,tab6,tab7,tab8,tab9,tab10;

   printf("Veja a tabuada de um numero\n");
   printf("Escolha um numero: ");
   scanf("%f%*c",&numero);

   tab0 = numero * 0;
   tab1 = numero * 1;
   tab2 = numero * 2;
   tab3 = numero * 3;
   tab4 = numero * 4;
   tab5 = numero * 5;
   tab6 = numero * 6;
   tab7 = numero * 7;
   tab8 = numero * 8;
   tab9 = numero * 9;
   tab10 = numero * 10;

   printf("%.2f x 0 = %.2f \t\t\t %.2f x 5 = %.2f",numero,tab0,numero,tab5);
   printf("\n%.2f x 1 = %.2f \t\t\t %.2f x 6 = %.2f",numero,tab1,numero,tab6);
   printf("\n%.2f x 2 = %.2f \t\t\t %.2f x 7 = %.2f",numero,tab2,numero,tab7);
   printf("\n%.2f x 3 = %.2f \t\t\t %.2f x 8 = %.2f",numero,tab3,numero,tab8);
   printf("\n%.2f x 4 = %.2f \t\t\t %.2f x 9 = %.2f",numero,tab4,numero,tab9);
   printf("\n\t\t\t\t\t %.2f x 10 = %.2f",numero,tab10);


      return 0;
}