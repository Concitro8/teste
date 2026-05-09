#include <stdio.h>
int main()
{
    float num1,num2,media;

    printf("Saiba a media ponderada de 2 notas:\n");
    printf("Nota 1: ");
    scanf("%f%*c",&num1);
    printf("Nota 2: ");
    scanf("%f%*c",&num2);

    media = (num1 * 2) + (num2 * 3) / (num1 + num2);

    printf("A media pondera sera: %.2f\n",media);

      return 0;
}