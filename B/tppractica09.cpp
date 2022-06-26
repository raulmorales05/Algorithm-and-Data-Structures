#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>

int hddtrunc, i,n;
float hdd;

main()
{
	printf("cuantos discos duros registrara?: ");
	scanf("%i",&n);
	
   for(i=0; i<n;i++)
   {
   
	printf("Ingrese la capacidad del disco duro en GB: ");
	scanf("%f",&hdd);
	
	hdd=hdd*1024;
	hdd=hdd/700;
	hddtrunc=trunc(hdd);
			if(hddtrunc<hdd)
			{
							hddtrunc=(hddtrunc+1)*n;
			}
	
   }
	
	
	printf("Se necesitan %d CDs",hddtrunc);
	return 0;
}
