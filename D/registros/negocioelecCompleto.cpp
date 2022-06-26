#include <stdio.h>

 #include <stdlib.h>

 #include <string.h>



struct registro

 {

 int codigo;

 char descripcion[30];

 float precio;

 char proveedor[35];

 };



int cargar(registro forra[50],int &CANT);

 void ordenar(int n, registro forra[50]);

 void mostrar(int n, registro forra [50]);

 void buscar(int n, registro forra[50]);

 void modificar(int n, registro forra [50]);

 void borrar(int &n, registro forra [50]);

 int menuPrincipal();





 main()

 {

 int n=0, i, nOp,nro_elem;

 registro forrajeria[50];


 do

 {

 nOp = menuPrincipal(); //Llama la función que muestra el menú.

 switch(nOp)

 {

 case 1:

 nro_elem=n;

 n=cargar(forrajeria,nro_elem);

 break;

 case 2:

 if (n>0)

 mostrar(n,forrajeria);

 else

 printf("\nTODAVIA NO HAY REGISTROS CARGADOS!!!");

 printf("\n\n");

 system("pause");

 break;

 case 3:

 if (n>0)

 buscar(n,forrajeria);

 else

 printf("\nTODAVIA NO HAY REGISTROS CARGADOS!!!");

 printf("\n\n");

 system("pause");

 break;

 case 4:

 if (n>0)

 ordenar(n,forrajeria);

 else

 printf("\nTODAVIA NO HAY REGISTROS CARGADOS!!!");

 printf("\n\n");

 system("pause");

 break;

 case 5:

 if (n>0)

 modificar(n,forrajeria);

 else

 printf("\nTODAVIA NO HAY REGISTROS CARGADOS!!!");

 printf("\n\n");

 system("pause");

 break;

 case 6:

 if (n>0)

 borrar(n,forrajeria);

 else

 printf("\nTODAVIA NO HAY REGISTROS CARGADOS!!!");

 printf("\n\n");

 system("pause");

 break;

 case 7:

 system("CLS");

 printf("\nF i n d e l P r o g r a m a");

 printf("\n");

 system("pause");

 break;

 default:

 system("CLS");

 printf("Ha ingresado un numero no valido");

 printf("\n");

 system("pause");

 break;

 } //Fin del switch().

 }while(nOp != 7); //Fin del Ciclo Do





 }





int cargar(registro forra[50],int &i)

 {

 system("cls");

 int cod;


 printf("\nIngrese el codigo del producto: ");

 scanf("%d",&cod);


 while(cod!=0)

 {

 forra[i].codigo=cod;

 _flushall();

 printf("\nIngrese la Descripcion del producto: ");

 gets(forra[i].descripcion);

 printf("\nPrecio: ");

 scanf("%f",&forra[i].precio);

 _flushall();

 printf("\nProveedor: ");

 gets(forra[i].proveedor);

 i++;

 printf("\nIngrese el codigo del producto: ");

 scanf("%d",&cod);

 }

 return i;

 }





 void mostrar(int n, registro forra [50])

 {



int i;

 system("cls");

 printf("\nLISTADO DE PRODUCTOS\n\n ");

 for(i=0;i<n;i++)

 {

 printf("\n");

 printf("\nCodigo: %d",forra[i].codigo);

 printf("\nDescripcion: %s",strupr(forra[i].descripcion));

 printf("\nPrecio: %.2f",forra[i].precio);

 printf("\nProveedor: %s",forra[i].proveedor);

 }

 }



void buscar(int n, registro forra [50])

 {

 int i,consulta,bandera=0;

 system("cls");

 printf("\nIngrese el codigo a consultar: ");

 scanf("%d",&consulta);

 for(i=0;i<n;i++)

 {

 if(consulta==forra[i].codigo)

 {

 printf("\nCodigo: %d",forra[i].codigo);

 printf("\nDescripcion: %s",forra[i].descripcion);

 printf("\nPrecio: %.2f",forra[i].precio);

 printf("\nProveedor: %s",forra[i].proveedor);

 i=n;

 bandera=1;

 }



}

 if(bandera==0)

 {

 printf("\nCODIGO INEXISTENTE...!");

 }

 }



void modificar(int n, registro forra [50])

 {

 int i,cod_modi,bandera=0;

 system("cls");

 printf("\nIngrese el codigo a modificar: ");

 scanf("%d",&cod_modi);

 for(i=0;i<n;i++)

 {

 if(cod_modi==forra[i].codigo)

 {

 printf("\nCodigo: %d",forra[i].codigo);

 printf("\nDescripcion: %s",forra[i].descripcion);

 printf("\nPrecio: %.2f",forra[i].precio);

 printf("\nProveedor: %s",forra[i].proveedor);


 printf("\n\nACTUALICE LOS DATOS: ");

 printf("\nCodigo: %d",forra[i].codigo);

 _flushall();

 printf("\nIngrese la Descripcion del producto: ");

 gets(forra[i].descripcion);

 printf("\nPrecio: ");

 scanf("%f",&forra[i].precio);

 _flushall();

 printf("\nProveedor: ");

 gets(forra[i].proveedor);

 i=n;

 bandera=1;

 }

 }

 if(bandera==0)

 {

 printf("\nCODIGO INEXISTENTE...!");

 }

 else

 printf("\nREGISTRO MODIFICADO...!");

 }



void borrar(int &n,registro forra [50])

 {

 int i,borrado,bandera=0,pos;

 registro auxiliar[50];

 system("cls");

 printf("\nIngrese el codigo a Borrar: ");

 scanf("%d",&borrado);

 for(i=0;i<n;i++)

 {

 if(borrado==forra[i].codigo)

 {

 pos=i;

 bandera=1;

 }


 }

 if(bandera==0)

 printf("\nNO EXISTE ESE CODIGO!!!");

 else

 {

 for(i=0;i<n;i++)

 {

 if(i==pos)

 {

 while(i<n)

 {

 forra[i]=forra[i+1];

 i++;

 }

 break;

 }

 }

 n--;

 printf("\nREGISTRO BORRADO!!!");

 }

 }



void ordenar(int n, registro forra[50])

 {


 bool bandera;

 registro auxiliar[50];

 int ord,i;

 char campo[11];


 do

 {

 printf("\nElija por que campo quiere ordenar: 1-Codigo 2-Descripcion 3-Proveedor: ");

 scanf("%d",&ord);

 }while(ord!=1 and ord!=2 and ord!=3);


 do

 {

 bandera=false;

 for(i=0;i<n-1;i++)

 {

 if (ord==1)

 {

 if(forra[i].codigo>forra[i+1].codigo)

 {

 auxiliar[i]=forra[i];

 forra[i]=forra[i+1];

 forra[i+1]=auxiliar[i];

 bandera=true;

 }

 }

 if(ord==2)

 {

 if(strcmp(forra[i].descripcion,forra[i+1].descripcion)>0)

 {

 auxiliar[i]=forra[i];

 forra[i]=forra[i+1];

 forra[i+1]=auxiliar[i];

 bandera=true;

 }


 }

 if(ord==3)

 {

 if(strcmp(forra[i].proveedor,forra[i+1].proveedor)>0)

 {

 auxiliar[i]=forra[i];

 forra[i]=forra[i+1];

 forra[i+1]=auxiliar[i];

 bandera=true;

 }


 }

 }

 }

 while(bandera==true);

 if(ord==1)

 printf("\nSE ORDENO POR CODIGO...");

 if(ord==2)

 printf("\nSE ORDENO POR DESCRIPCION...");

 if(ord==3)

 printf("\nSE ORDENO POR PROVEEDOR...");

 }



int menuPrincipal()

 {

 int opc=0;

 system("CLS");

 printf("\t*************************************************\n");

 printf("\t** M E N U P R I N C I P A L **\n");

 printf("\t*************************************************\n");

 printf("\t** **\n");

 printf("\t** 1-> Cargar **\n");

 printf("\t** **\n");

 printf("\t*************************************************\n");

 printf("\t** **\n");

 printf("\t** 2-> Mostrar **\n");

 printf("\t** **\n");

 printf("\t*************************************************\n");

 printf("\t** **\n");

 printf("\t** 3-> Consultar **\n");

 printf("\t** **\n");

 printf("\t*************************************************\n");

 printf("\t** **\n");

 printf("\t** 4-> Ordenar **\n");

 printf("\t** **\n");

 printf("\t*************************************************\n");

 printf("\t** **\n");

 printf("\t** 5-> Modificar **\n");

 printf("\t** **\n");

 printf("\t*************************************************\n");

 printf("\t** **\n");

 printf("\t** 6-> Borrar **\n");

 printf("\t** **\n");

 printf("\t*************************************************\n");

 printf("\t** **\n");

 printf("\t** 7-> SALIR del SISTEMA **\n");

 printf("\t** **\n");

 printf("\t*************************************************\n\n");

 printf(" Seleccione Opcion: ");

 scanf("%d", &opc);

 return opc; //retorna el número de opción seleccionada.

 }
