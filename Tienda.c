#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>
#include "Elem.h"
#include "Lista.h"
#include "TablaH.h"

void menu(TablaH tienda);
void cargarTabla(TablaH tienda);

int main(){
TablaH tienda=consTH(10);
    cargarTabla(tienda);
    menu(tienda);
    return 0;

}

void cargarTabla(TablaH tienda){

FILE *entrada=fopen("tienda.txt","r");
      fflush(stdin);
      fScanTabla(entrada,tienda);
  system("cls");
      fclose(entrada);

}

void menu(TablaH tienda){
      Elem e;
      int opcion;
      char aconsulta[30];
    do{
	printf("\nMenu de opciones\n\n");
		printf("\t1. Imprimir todos elementos registrados.\n");
		printf("\t2. Consultar elemento.\n");
		printf("\t3. Agregar elemento.\n");
		printf("\t4. Eliminar elemento.\n");
		printf("\t5. Salir\n");
		printf("\nEscoja una opcion: ");
		fflush(stdin);
		scanf("%d", &opcion);
		system("cls");

	switch(opcion)
		{
			case 1:
            ImprimeTabla(tienda);
                break;
            case 2:
            printf("INTRODUZCA EL PRODUCTO A BUSCAR: ");
            fflush(stdin);
            gets(aconsulta);
            Pasarmayamin(aconsulta);
            Consulta(aconsulta,tienda,1);
                break;
            case 3:
            printf("INSERTE LOS DATOS DEL PRODUCTO\n\n");
            fflush(stdin);
            insertaH(ScanElem(e),tienda);
                break;
            case 4:
            printf("INTRODUZCA EL PRODUCTO A ELIMINAR: ");
            fflush(stdin);
            gets(aconsulta);
            Pasarmayamin(aconsulta);
            Consulta(aconsulta,tienda,2);
                break;
            case 5:
                printf("\nADIOS :)");
                break;
            default:
                printf("\nPor favor seleccione una opcion valida :) ");
           break;
		}
		printf("\n\n\n");
		system("pause");
		system("cls");
	} while( opcion != 5 );

}
