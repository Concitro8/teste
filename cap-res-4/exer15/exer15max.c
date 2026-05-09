#include <stdio.h>
int main()
{
  float sal_min,n_horas_trab,n_depen,n_horas_extras;
  float sal_receber,valor_hora,sal_mes,valor_depen,valor_extras,imposto;
  float sal_bruto,sal_liq,gratif;

  printf("Qual o salario minimo: ");
  scanf("%f%*c",&sal_min);
  printf("Qual o numero de horas trabalhadas: ");
  scanf("%f%*c",&n_horas_trab);
  printf("Qual a quantidade de dependentes: ");
  scanf("%f%*c",&n_depen);
  printf("Qual o numero das horas EXTRAS trabalhadas: ");
  scanf("%f%*c",&n_horas_extras);

  valor_hora = sal_min * 1 / 5;

  sal_mes = n_horas_trab * valor_hora;

  valor_depen = 32 * n_depen;

  valor_extras = n_horas_extras * (valor_hora + (valor_hora * 50 / 100));

  sal_bruto = sal_mes + valor_depen + valor_extras;

  if (sal_bruto < 200)
  {
    imposto = 0;
  }

  if (sal_bruto >= 200 && sal_bruto <= 500)
  {
    imposto = sal_bruto * 10 /100;
  }

  if (sal_bruto > 500)
  {
    imposto = sal_bruto * 20 /100;
  }


  sal_liq = sal_bruto - imposto;


  if (sal_liq <= 350)
  {
    gratif = 100;
  }

  if (sal_liq > 350)
  {
    gratif = 50;
  }


  sal_receber = sal_liq + gratif;


  printf("O salario a receber sera de %.2f\n",sal_receber);



      return 0;
}