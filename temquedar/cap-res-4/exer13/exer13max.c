#include <stdio.h>
int main()
{
    int op;
    float sal,imp,aum,novo_sal;

   printf("\tMENU DE OPCOES\n");
   printf("1 - IMPOSTO\n");
   printf("2 - NOVO SALARIO\n");
   printf("3 - CLASSIFICACAO\n");
   printf("Digite a opcao desejada: ");
   scanf("%d%*c",&op);

   switch(op)
   {
    case 1:
     printf("Qual o salario: ");
     scanf("%f%*c",&sal);
     if (sal < 500)
     {
        imp = sal * 5 / 100;
     }
     if (sal >= 500 && sal <= 850)
     {
        imp = sal * 10 / 100;
     }
     if (sal > 850)
     {
        imp = sal * 15 / 100;
     }
     printf("O imposto sera de %.2f\n",imp);
    break;

    case 2:
     printf("Qual o salario: ");
     scanf("%f%*c",&sal);
     if (sal > 1500)
     {
        aum = 25;
     }
     if (sal >= 750 && sal <= 1500)
     {
        aum = 50;
     }
     if (sal >= 450 && sal < 750)
     {
        aum = 75;
     }
     if (sal < 450)
     {
        aum = 100;
     }

     novo_sal = sal + aum;

     printf("O novo salario sera de %.2f\n",novo_sal);
    break;
    
    case 3:
     printf("Qual o salario: ");
     scanf("%f%*c",&sal);
     if (sal <= 700)
     {
        printf("Mal Renumerado\n");
     }
     if (sal > 700)
     {
        printf("Bem Renumerado\n");
     }
    break;
    
    default:
     printf("Opcao Invalida\n"); 
   }

   
      return 0;
}