#include <stdio.h>
int main()
{
  int n1,n2,n3,n4,soma;
  
  printf("Digite 4 numeros\n");
  printf("Primeiro:");
  scanf("%d%*c",&n1);
  printf("Segundo:");
  scanf("%d%*c",&n2);
  printf("Terceiro:");
  scanf("%d%*c",&n3);
  printf("Quarto:");
  scanf("%d%*c",&n4);
  
  soma = n1 + n2 + n3 + n4;

  printf("O resultado foi %d\n",soma);

    return 0;
}