#include<stdio.h>
#include<stdlib.h>

int main()

{
    int Dia=0, Mes=0, Anio=0;
    printf("Ingrese el mes y año del que quiera saber sus dias\n");
    printf("Mes: ");
    scanf("%d",&Mes);
    printf("Año: ");
    scanf("%d",&Anio);

    switch (Mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        puts("El mes tiene 31 dias");
        break;
    case 2:
        if(Anio%4!=0 || (Anio%100==0 && Anio%400!=0))
            {
            puts("El mes tiene 28 dias");
            }
        else
            {
            puts("El mes tiene 29 dias");
            }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        puts("El mes tiene 30 dias");
        break;
    default:
        puts("Error");
        break;
    }
    system("pause");
}