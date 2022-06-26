#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


struct fecha
{	int dia;
	int mes;
	int anio;
};

struct producto
{
	int Cod;
	char Art[50];
	int CantMin;
	fecha fecult;
	int ExisAct;
	float Pre;
};

void bus(producto pro[50],int n1);
void ven(producto pro[50],int n2);
void exs(producto pro[50],int n3);

main()
{
	int i,n;
	producto pro[50]; 
	printf("Ingrese la Cantidad de Productos (Mínimo 10): ");
	scanf("%d",&n);
	
	if(n>=10)
	{
		for(i=0;i<n;i++)
		{
			printf("Ingrese el Código del Producto: ");
			scanf("%d",&pro[i].Cod);
			printf("\nIngrese el nombre del Articulo: ");
			_flushall();
			gets(pro[i].Art);
			printf("\nIngrese la Cantidad Minima que puede tener el producto: ");
			scanf("%d",&pro[i].CantMin);
			printf("\nIngrese la Fecha de la ultima vez que se compro el producto");
			printf("\nDia: ");
			scanf("%d",&pro[i].fecult.dia);
			printf("\nMes: ");
			scanf("%d",&pro[i].fecult.mes);
			printf("\nAnio: ");
			scanf("%d",&pro[i].fecult.anio);
			printf("\nIngrese la Existencia Actual del producto: ");
			scanf("%d",&pro[i].ExisAct);
			printf("\nIngrese el Precio del Producto: ");
			scanf("%f",&pro[i].Pre);
		}
		bus(pro,n);
		system("pause");
		printf("\n\n");
		ven(pro,n);
		system("pause");
		printf("\n\n");
		exs(pro,n);
	}




}

void bus(producto pro[50],int n1)
{
	int i,bus,pos;
	
	printf("\nIngrese el Codigo del producto a buscar: ");
	scanf("%d",&bus);
	for(i=0;i<n1;i++)
	{
		if(bus==pro[i].Cod)
		{
			pos=i;
		}
	}
	
	if(bus==pro[pos].Cod)
	{
		printf("\nIngrese la existencia actualizada: ");
		scanf("%d",&pro[pos].ExisAct);
		printf("\nIngrese la Fecha de Compra");
		printf("\nDia: ");
		scanf("%d",&pro[pos].fecult.dia);
		printf("\nMes: ");
		scanf("%d",&pro[pos].fecult.mes);
		printf("\nAnio: ");
		scanf("%d",&pro[pos].fecult.anio);
	}
	else
	{
		printf("\nEl Codigo Ingresado No Existe");
	}
}

void ven(producto pro[50],int n2)
{
	int i,pos,bus,venta,total;
	
	printf("\nIngrese el Codigo del producto a Vender: ");
	scanf("%d",&bus);
	for(i=0;i<n2;i++)
	{
		if(bus==pro[i].Cod)
		{
			pos=i;
		}
		else
		{
		printf("\nEl Codigo Ingresado no Existe");
		}
	}
	
	
	if(bus==pro[pos].Cod)
	{
		printf("\nIngrese la Cantidad de la Venta: ");
		scanf("%d",&venta);
		if(venta<=pro[pos].ExisAct)
		{
		pro[pos].ExisAct=pro[pos].ExisAct-venta;
		printf("\nCodigo");
		printf("\tDescripcion");
		printf("\tPrecio/Unitario");
		printf("\t\tCantidad Solicitada");
		printf("\tTotal");
		printf("\n");
		printf("\n%d",pro[pos].Cod);
		printf("\t%s",pro[pos].Art);
		printf("\t\t%.2f",pro[pos].Pre);
		printf("\t\t\t%d",venta);
		total=pro[pos].Pre*venta;
		printf("\t\t\t%d",total);
		}
		else
		{
			printf("\nLa Cantidad Excede la Existencia Actual");
		}	
		
	}

	
}

void exs(producto pro[50],int n3)
{
	int i,rep,pos;
	
	printf("\n\tProductos que no poseen la cantidad minima\n");
	for(i=0;i<n3;i++)
	{
		if(pro[i].ExisAct<pro[i].CantMin)
		{
			pos=i;
		}
	}
	
	for(pos=0;pos<i;pos++)
		{
			if(pro[pos].ExisAct<pro[pos].CantMin)
			{
			printf("\nProducto: ");
			printf("\n%s",pro[pos].Art);
			printf("\nIngrese el pedido de compra para reponer stock: ");
			scanf("%d",&rep);
			pro[pos].ExisAct=pro[pos].ExisAct+rep;
			printf("\nExistencia actual de %s: %d",pro[pos].Art,pro[pos].ExisAct);
			}
		}
}
