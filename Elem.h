
typedef struct
{
	char *nombre;
	char *caducidad;
	int *precio;
	int *unidad;
	
} Elem;

int EsIgual(Elem e1, Elem e2){return !strcmp(e1.nombre,e2.nombre);}

void ImpElem(Elem e)
{
	printf("\n\nNOMBRE:%s \nCADUCIDAD:%s \nUNIDAD:%d \nPRECIO:$%d", e.nombre, e.caducidad, e.unidad,e.precio);
}

 Elem ScanElem(Elem e){

    char aux[30];
     e.nombre=(char*)malloc(30);
     e.caducidad=(char*)malloc(30);
    printf("\nNOMBRE:");
    gets(e.nombre);
    Pasarmayamin(e.nombre);
    printf("\nCADUCIDAD:");
    gets(e.caducidad);
    Pasarmayamin(e.caducidad);
    printf("\nPRECIO:");
	scanf("%d",&e.precio);
	printf("\nUNIDAD:");
	scanf("%d",&e.unidad);
	return e;
 }

void Pasarmayamin(char cad[])
{
	int i=0;
	for (i=0;cad[i]!='\0';i++)
	{
		if(cad[i]>='a'&&cad[i]<='z')
		{
			cad[i]=cad[i]-32;
		}
	}
}
