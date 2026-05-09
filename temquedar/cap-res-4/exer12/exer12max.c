#include <stdio.h>
int main()
{
    int cargo;
    float salario,aumento,novo_sal;

   printf("Digite o cardo do funcionario (1,2,3,4 ou 5)\n");
   scanf("%d%*c",&cargo);
   printf("Digite o valor do salario:\n");
   scanf("%f%*c",&salario);

   switch(cargo)
   {
    case 1:
     printf("O cargo e Escrituario\n");
     aumento = salario * 50 / 100;
     printf("O valor do aumento e: %.2f\n",aumento);
     novo_sal = salario + aumento;
     printf("O novo salario e: %.2f\n",novo_sal);
    break;

    case 2:
     printf("O cargo e Secretario\n");
     aumento = salario * 35 / 100;
     printf("O valor do aumento e: %.2f\n",aumento);
     novo_sal = salario + aumento;
     printf("O novo salario e: %.2f\n",novo_sal);
    break;
    
    case 3:
     printf("O cargo e Caixa\n");
     aumento = salario * 20 / 100;
     printf("O valor do aumento e: %.2f\n",aumento);
     novo_sal = salario + aumento;
     printf("O novo salario e: %.2f\n",novo_sal);
    break;
    
    case 4:
     printf("O cargo e Gerente\n");
     aumento = salario * 10 / 100;
     printf("O valor do aumento e: %.2f\n",aumento);
     novo_sal = salario + aumento;
     printf("O novo salario e: %.2f\n",novo_sal);
    break;
    
    case 5:
     printf("O cargo e Diretor\n");
     aumento = salario * 0 / 100;
     printf("O valor do aumento e: %.2f\n",aumento);
     novo_sal = salario + aumento;
     printf("O novo salario e: %.2f\n",novo_sal);
    break;
    
    default:
     printf("Cargo inexistente\n"); 
   }


   
      return 0;
}