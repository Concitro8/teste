#include <stdio.h>
int main()
{
    float salario,novosalario;

    printf("Qual o seu salario?:\n");
    printf("SALARIO:");
    scanf("%f%*c",&salario);
    
    novosalario = salario + salario * 25/100;

    printf("O seu novo salario sera %.2f\n",novosalario);

      return 0;
}