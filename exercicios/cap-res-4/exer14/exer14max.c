#include <stdio.h>
int main()
{
  float sal,novo_sal,boni,aux;

  printf("Qual o seu salario: ");
  scanf("%f%*c",&sal);

  if ( sal <= 500)
  {
    boni = sal * 5 / 100;
  }

  if (sal <= 1200)
  {
    boni = sal * 12/100;
  }

  else
  {
    boni = 0;
  }

  
  if (sal <= 600)
  {
    aux = 150;
  }

  else
  {
    aux = 100;
  }


  novo_sal = sal + boni + aux;
  
  printf("O novo salario sera: %.2f\n",novo_sal);


      return 0;
}