#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct {
    int codigo;
    char descripcion[41];
    float precio;
} tproducto;


typedef struct fecha

 {

 int dia, mes, anio;




 };
 
typedef struct{
	
	 
	 
int codigo;

 char descripcion[35];

 float precio;

 int cantidad;

 fecha fecha_compra;

 char cliente[35];

	
}presu;


void continuar()
{
    printf("Presione una tecla para continuar\n\n");
    getch();
}

void crear()
{
    FILE *arch;
    arch=fopen("productos.dat","wb");
    if (arch==NULL)
        exit(1);
    fclose(arch);
    continuar();
}


void cargar()
{
    FILE *arch;
    arch=fopen("productos.dat","ab");
    if (arch==NULL)
        exit(1);
    tproducto producto;
    printf("Ingrese el codigo del producto:");
    scanf("%i",&producto.codigo);
    fflush(stdin);
    printf("Ingrese el nombre del producto:");
    gets(producto.descripcion);
    printf("Ingrese precio:");
    scanf("%f",&producto.precio);
    fwrite(&producto, sizeof(tproducto), 1, arch);
    fclose(arch);
    continuar();
}

void listado()
{
    FILE *arch;
    arch=fopen("productos.dat","rb");
    if (arch==NULL)
        exit(1);
    tproducto producto;
    fread(&producto, sizeof(tproducto), 1, arch);
    while(!feof(arch))
    {
        printf("%i %s %0.2f\n", producto.codigo, producto.descripcion, producto.precio);
        fread(&producto, sizeof(tproducto), 1, arch);
    }
    fclose(arch);
    continuar();
}

void consulta()
{
    FILE *arch;
    arch=fopen("productos.dat","rb");
    if (arch==NULL)
        exit(1);
    printf("Ingrese el codigo de producto a consultar:");
    int cod;
    scanf("%i", &cod);
    tproducto producto;
    int existe=0;
    fread(&producto, sizeof(tproducto), 1, arch);
    while(!feof(arch))
    {
        if (cod==producto.codigo)
        {
           printf("%i %s %0.2f\n", producto.codigo, producto.descripcion, producto.precio);
           existe=1;
           break;
        }
        fread(&producto, sizeof(tproducto), 1, arch);
    }
    if (existe==0)
        printf("No existe un producto con dicho codigo\n");
    fclose(arch);
    continuar();
}

void modificacion()
{
    FILE *arch;
    arch=fopen("productos.dat","r+b");
    if (arch==NULL)
        exit(1);
    printf("Ingrese el codigo de producto a modificar:");
    int cod;
    scanf("%i", &cod);
    tproducto producto;
    int existe=0;
    fread(&producto, sizeof(tproducto), 1, arch);
    while(!feof(arch))
    {
        if (cod==producto.codigo)
        {
           printf("%i %s %0.2f\n", producto.codigo, producto.descripcion, producto.precio);
           printf("Ingrese nuevo precio:");
           scanf("%f",&producto.precio);
           int pos=ftell(arch)-sizeof(tproducto);
           fseek(arch,pos,SEEK_SET);
           fwrite(&producto, sizeof(tproducto), 1, arch);
           printf("Se modifico el precio para dicho producto.\n");
           existe=1;
           break;
        }
        fread(&producto, sizeof(tproducto), 1, arch);
    }
    if (existe==0)
        printf("No existe un producto con dicho codigo\n");
    fclose(arch);
    continuar();
}






presupuesto(){
	int cuit,plazoentrega,fecha;
	
	printf("Empresa FRICAL\n \t\t\t\ PRESUPUESTO\n\nAguirre\n\cuit:\nMail:\n\nDATOS DEL CLIENTE:\nFecha:\t\t\t\t\tMetodo de Pago:\nEmpresa:\t\t\t\tPlazo de entrega:\nCuit/Cuil:\t\t\t\tConfecciona:\nContacto:\t\t\t\tMail:");
	
}









main(){
	int cuit,plazoentrega,fecha;
	
	printf("Empresa FRICAL\n \t\t\t\ PRESUPUESTO\n\nAguirre\n\cuit:\nMail:\n\nDATOS DEL CLIENTE:\nFecha:\t\t\t\t\tMetodo de Pago:\nEmpresa:\t\t\t\tPlazo de entrega:\nCuit/Cuil:\t\t\t\tConfecciona:\nContacto:\t\t\t\tMail:");
	
	system("cls");

 int i=0,cod;

 printf("\nIngrese el codigo del producto: ");

 scanf("%d",&cod);


 while(cod!=0)

 {

 amp[i].codigo=cod;

 _flushall();

 printf("\nIngrese el nombre del producto: ");

 gets(amp[i].descripcion);

 printf("\nPrecio: ");

 scanf("%f",&amp[i].precio);

 printf("\nCantidad: ");

 scanf("%d",&amp[i].cantidad);

 printf("\nFECHA DE COMPRA\n");

 printf("\nDIA: ");

 scanf("%d",&amp[i].fecha_compra.dia);

 printf("\nMES: ");

 scanf("%d",&amp[i].fecha_compra.mes);

 printf("\nANIO: ");

 scanf("%d",&amp[i].fecha_compra.anio);

 _flushall();

 printf("\nNombre del Proveedor: ");

 gets(amp[i].cliente);

 printf("\nIngrese el codigo del producto: ");

 scanf("%d",&cod);

 i++;

 }
	
	
}















int main()
{
    int opcion;
    do {
        printf("1 - Crear un archivo binario llamado \"productos.dat\"\n");
        printf("2 - Carga de registros de tipo tproducto\n");
        printf("3 - Listado completo de productos.\n");
        printf("4 - Consulta de un producto por su codigo.\n");
        printf("5 - Modificacion del precio de un producto. \n");
        printf("6 - Presupuesto\n\n");
         printf("7 - Finalizar\n\n");
        printf("Ingrese su opcion:");
        scanf("%i",&opcion);
        switch (opcion) {
            case 1:crear();
                   break;
            case 2:cargar();
                   break;
            case 3:listado();
                   break;
            case 4:consulta();
                   break;
            case 5:modificacion();
                   break;
            case 6:presupuesto();
                   break;
        }
    } while (opcion!=7);
    return 0;
}
