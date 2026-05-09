#include <stdio.h>
int main()
{
   float celsius,fahrenheit;

   printf("Converta de Celsius para Fahrenheit\n");
   printf("Qual a temperatura em graus Celsius: ");
   scanf("%f%*c",&celsius);
   
   fahrenheit = 180 * (celsius + 32) / 100;
   
   printf("A temperatura em graus Fahrenheit e de: %.2f graus\n",fahrenheit);


      return 0;
}