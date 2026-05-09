#include <stdio.h>
#include <time.h>
int main()
{
    time_t t;
    struct tm *data_hora;
    
    int dia,mes,ano,hora,min;

    t = time(NULL);
    data_hora = localtime(&t);
    dia = data_hora -> tm_mday;
    mes = data_hora -> tm_mon + 1;
    ano = data_hora -> tm_year + 1900;

    printf("Data Atual:  %d / %d / %d – ",dia,mes,ano);
 
    if (mes == 1)
    {
        printf("janeiro\n");
    }
     if (mes == 2)
    {
        printf("fevereiro\n");
    }
     if (mes == 3)
    {
        printf("marco\n");
    }
     if (mes == 4)
    {
        printf("abril\n");
    }
     if (mes == 5)
    {
        printf("maio\n");
    }
     if (mes == 6)
    {
        printf("junho\n");
    }
     if (mes == 7)
    {
        printf("julho\n");
    }
     if (mes == 8)
    {
        printf("agosto\n");
    }
     if (mes == 9)
    {
        printf("setembro\n");
    }
     if (mes == 10)
    {
        printf("outubro\n");
    }
     if (mes == 11)
    {
        printf("novembro\n");
    }
     if (mes == 12)
    {
        printf("dezembro\n");
    }

    
    
    hora = data_hora -> tm_hour;
    min = data_hora -> tm_min;

    printf("Hora Atual: ");
    printf("%d : %d\n",hora,min);

      return 0;
}