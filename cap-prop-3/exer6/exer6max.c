#include <stdio.h>
int main()
{
    float sal_fixo,com,vendas,sal_final;

    printf("Qual o salario fixo:\n");
    scanf("%f%*c",&sal_fixo);
    printf("Qual o valor da venda:\n");
    scanf("%f%*c",&vendas);

    com = vendas * 4 / 100;

    sal_final = sal_fixo + com;

    printf("A comissao sera de: %.2f\n",com);
    printf("O salario final sera de: %.2f\n",sal_final);


      return 0;
}