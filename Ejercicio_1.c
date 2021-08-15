#include<stdio.h>
#include<stdlib.h>

int main()

{
    char ch;
    printf("Ingrese la nota de alumno: ");
    ch = getchar();

    switch (ch)
    {
    case 'A':
    case 'a':
        puts("Excelente");
        break;
    case 'B':
    case 'b':
        puts("Buena");
        break;
    case 'C':
    case 'c':
        puts("Regular");
        break;
    case 'D':
    case 'd':
        puts("Suficiente");
        break;
    case 'F':
    case 'f':
        puts("Insuficiente");
        break;
    default:
        puts("Error");
        break;
    }
    system("pause");
}