#include<stdio.h>
#include<stdlib.h>

int main()

{
    int Mes=0;
    printf("Ingrese el mes del que quiera saber sus dias: ");
    scanf("%d",&Mes);

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
        puts("El mes tiene 28 dias");
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