#include <stdio.h>
int main()
{
   float salario,percentual,aumento,novosalario;

   printf("Qual o salario?:\n");
   scanf("%f%*c",&salario);
   printf("Qual o percentual de aumento?:\n");
   scanf("%f%*c",&percentual);

   aumento = salario * percentual/100;

   printf("O valor do aumento sera: %.2f\n",aumento);

   novosalario = salario + aumento;

   printf("O novo salario sera:%.2f\n",novosalario);

   
      return 0;
}