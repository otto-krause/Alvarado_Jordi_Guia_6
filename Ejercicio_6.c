#include<stdio.h>
#include<stdlib.h>

int main()

{
    int Dia=0, Mes=0;
    printf("Ingrese su dia y luego su mes de nacimiento\n");
    printf("Dia: ");
    scanf("%d",&Dia);
    printf("Mes: ");
    scanf("%d",&Mes);

    switch(Mes)
	{
	case 1:
		if(Dia>19) {puts("Usted es de Acuario");}
		else{puts("Usted es de Capricornio");}
        break;
	case 2:
		if(Dia>18) {puts("Usted es de Piscis");}
		else{puts("Usted es de Acuario");}
		break;
	case 3:
		if(Dia>20) {puts("Usted es de Aries");}
		else{puts("Usted es de Piscis");}
		break;
	case 4:
		if(Dia>19) {puts("Usted es de Tauro");}
		else{puts("Usted es de Aries");}
		break;
	case 5:
		if(Dia>20) {puts("Usted es de Geminis");}
		else{puts("Usted es de Tauro");}
		break;
	case 6:
		if(Dia>20) {puts("Usted es de Cancer");}
		else{puts("Usted es Geminis");}
		break;
	case 7:
		if(Dia>22) {puts("Usted es Leo");}
		else{puts("Usted es Cancer");}
		break;
	case 8:
		if(Dia>22) {puts("Usted es de Virgo");}
		else{puts("Usted es de Leo");}
		break;
	case 9:
		if(Dia>22) {puts("Usted es de Libra");}
		else{puts("Ustes es de Virgo");}
		break;
	case 10:
		if(Dia>22) {puts("Usted es de Escorpio");}
		else{puts("Usted es de Libra");}
		break;
	case 11:
		if(Dia>21) {puts("Usted es de Sagitario");}
		else{puts("Usted es de Escorpio");}
		break;
	case 12:
		if(Dia>21) {puts("Usted es de Capricornio");}
		else{puts("Usted es de Sagitario");}
		break;
    default:
        puts("Error");
        break;
    }
}