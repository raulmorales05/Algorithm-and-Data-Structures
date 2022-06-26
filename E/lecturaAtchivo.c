#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

main(){
setlocale(LC_CTYPE,"Spanish");
char palabra[100];
FILE *punt_texto;
punt_texto=fopen("ejemplok4.txt","r");
if(punt_texto==NULL){
	printf("\Error");
	exit(1);
	
}


fgets(palabra,100,punt_texto);
while(!feof(punt_texto)){
	printf("%s",palabra);
	fgets(palabra,100,punt_texto);
	Sleep(350);
		
}
fclose(punt_texto);

printf("\n\n");
system("pause");


}
