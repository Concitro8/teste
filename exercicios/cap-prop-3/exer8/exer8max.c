#include <stdio.h>
int main()
{
    float p_kilos,p_gramas;

    printf("Coloque seu peso em kilos:\n");
    scanf("%f%*c",&p_kilos);

    p_gramas = p_kilos * 1000;

    printf("O peso em gramas equivale a: %.2f\n",p_gramas);


      return 0;
}