/*En un archivo se tienen registradas las ventas que realiza un comercio. Cada registro contiene los
siguientes datos:
- Numero de vendedor (Son tres los vendedores 1, 2, 3)
- Apellido y Nombre del vendedor
- Numero Factura.
- Importe facturado por esa venta.
- Forma de venta (1: Contado, 2: Crédito)
- Fecha de Venta (DD MM AAAA) (Año se registra 4 dígitos) campo jerarquizado.

Desarrolle un programa que permita realizar, al encargado del negocio, por medio de un menú las
siguientes operaciones que deben ser realizadas en función diferente:



b.Cantidad total de venta registrada en un mes determinado. (El mes debe ser solicitado por teclado).

c. Mostrar cuantas ventas se realizaron de Contado y cuantas ventas se realizaron a Crédito, de un
determinado mes. (El mes se solicita por teclado).

d.Importe total realizado en el mes por un vendedor. (El apellido y nombre del vendedor, deberá ser
solicitado por teclado).

e. Listar todos los datos que contiene el archivo.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>





struct fecha

 {

 int dia, mes, anio;

 };

typedef struct {
    int numv;
    char nom[41];
    int fac;
	float venta;
	int forma;
	struct fecha fecha_compra;
	
} tproducto;


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
    printf("Ingrese numero del vendedor(Son tres los vendedores 1, 2, 3):");
    scanf("%i",&producto.numv);
    fflush(stdin);
    printf("Ingrese el nombre del venderdor:");
    gets(producto.nom);    
     printf("Ingrese numero de factura:");
    scanf("%i",&producto.fac);
    printf("Ingrese precio:");
    scanf("%f",&producto.venta);
      printf("Ingrese la forma de pago (1: Contado, 2: Credito):");
    scanf("%i",&producto.numv);
    
     printf("\nFecha de compra: \n");

 printf("\nDIA: ");

 scanf("%d",&producto.fecha_compra.dia);

 printf("\nMES: ");

 scanf("%d",&producto.fecha_compra.mes);

 printf("\nANIO: ");

 scanf("%d",&producto.fecha_compra.anio);

 _flushall();
    
    fwrite(&producto, sizeof(tproducto), 1, arch);
    fclose(arch);
    continuar();
}

void listado()
{
    FILE *arch;
    arch=fopen("productos.dat","rb");
    int mes,cont=0,cred=0;
    if (arch==NULL)
        exit(1);
    tproducto producto;
    fread(&producto, sizeof(tproducto), 1, arch);
    while(!feof(arch))
    {
    	
    	 printf("\nIngrese la fecha del mes: ");
    	 scanf("%i",&mes);
    	 
		 if(mes==producto.fecha_compra.mes){
		 	
		 	
		 	printf("el monto de la venta es:%0.2f\n ",producto.venta);
		 	
		 	// como sumar los motos de un registro??
		 	
		 	
		 //	printf(" en numero del vendedor es: %i\n el nombre del vendedor es:%s\n el numero de factura es: %i\n el monto de la venta es:%0.2f\n  la forma de pago es (1: Contado, 2: Crédito): %i\n el dia y en año de la compra es: %i--%i\n  ", producto.numv, producto.nom, producto.fac,producto.venta,producto.forma,producto.fecha_compra.dia,producto.fecha_compra.anio);
		 
		 //hacer esto que esta abajo en otra funcion		 
		 
		 if(producto.forma==1){
		 	cont++;
		 	
		 }
		 else{
		 	cred++;
		 }
		 printf("el nuemro de pagos de contado es: %i ",cont);
		 printf("el nuemro de pagos en credito es: %i ",cred);
		 //hasta aca
		 
            fread(&producto, sizeof(tproducto), 1, arch);
		 }    	
        
    }
    fclose(arch);
    continuar();
}


/*void consulta()
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
        if (cod==producto.fecha_compra.mes)
        {
           printf("%i %s %0.2f\n", producto., producto.descripcion, producto.precio);
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
}*/

int main()
{
    int opcion;
    do {
        printf("1 - Crear un archivo binario llamado \"productos.dat\"\n");
        printf("2 - Carga de registros de tipo tproducto\n");
        printf("3 - Cantidad total de venta registrada en un mes determinado.\n");
        printf("4 - Consulta de un producto por su codigo.\n");
        printf("5 - Modificacion del precio de un producto. \n");
        printf("6 - Finalizar\n\n");
        printf("Ingrese su opcion:");
        scanf("%i",&opcion);
        switch (opcion) {
            case 1:crear();
                   break;
            case 2:cargar();
                   break;
            case 3:listado();
                   break;
           // case 4:consulta();
                   break;
        //    case 5:modificacion();
                   break;
        }
    } while (opcion!=6);
    return 0;
}
