typedef Lista *TablaH;
TablaH consTH(int n){
     int i;
     TablaH t=(TablaH)malloc(sizeof(Lista)*n);
     for(i=0;i<n;i++)
         t[i]=vacia();
     return t;
}

void insertaH(Elem e, TablaH t)
{
    int p=myHash(e);
    t[p]=cons(e,t[p]);
     printf("\nDatos insertados correctamente...");
}

int myHash(Elem e){
int key=(e.nombre[1]+e.nombre[2])%10;
return key;
}

int ImprimeTabla(TablaH tienda){
int i,n=10;
printf("\n Toda la informacion de la tabla Hash\n");

    for(i=0;i<n;i++){
        printf("\n\n--------%d--------",i);
        ImpLista(tienda[i]);

    }
}

void fScanTabla(FILE *entrada,TablaH tienda){
 Elem e;
 int i;

while (fscanf(entrada,"%s%s%d%d",e.nombre=(char*)malloc(30),e.caducidad=(char*)malloc(30),&e.precio,&e.unidad)!=EOF)
     insertaH(e,tienda);

}

void Consulta(char *ident, TablaH t,int param){
       Elem e;
       int key;
       e.nombre=(char*)malloc(3);
       strcpy(e.nombre,ident);
       key = myHash(e);
       if(EstaEn(e,t[key]))
          if (param==1)
           ImpConsulta(e,t[key]);
           else{
           t[key]=EliminaElem(e,t[key]);
            printf("\nElemento eliminado correctamente");
            }
       else
            puts("Elemento no encontrado.");
}

void ImpConsulta(Elem e, Lista l){
    if(EsIgual(e,cabeza(l)))
                 ImpElem(cabeza(l));
            else
                ImpConsulta(e, resto(l));
}
