#include<stdio.h>
#include<string.h>
#include<windows.h>



int main() {
    char frase[60],rep[100],temporal[100];
    char pal;
    int longitud,i,j,inicial,acertado=0,temp=0,oportunidades=6;
    int repetido=0,gano=0;
   
    printf("\nJuego del Ahorcado\n");
    printf("Introduzca la palabra a adivinar: ");
    scanf("\n%s",&frase);
   
    longitud = 0;
    inicial = 0;
    j = 0;
   
    rep[0] = ' ';
    rep[1] = '\0';
    
    system ("cls");
   
    do {
        temp=0;
   
        if(inicial == 0) {
         for(i=0;i<strlen(frase);i++) {
          if(frase[i] == ' ') {
            temporal[i] = ' ';
             longitud++;
          }
          else {
             temporal[i] = '_';       
             longitud++;
          }
         }
        }
   
        inicial = 1;
       
        temporal[longitud] = '\0';
       
        for(i=0;i<strlen(rep);i++) {
           if(rep[i] == pal) {
            repetido = 1;
            break;
          }
          else {
           repetido = 0;
         }
        }
       
        if(repetido == 0) {
         for(i=0;i<strlen(frase);i++) {
                    if(frase[i] == pal) {
             temporal[i] = pal;
              acertado++;
              temp=1;
            }
          }
        }
       
        if(repetido == 0) {
         if(temp == 0) {
          oportunidades-- ;
         }
        }
        else {
         printf("Ya se ha introducido este caracter");
         printf("\n\n");
        }
       
        printf("\n");
       
        for(i=0;i<strlen(temporal);i++) {
         printf(" %c ",temporal[i]);
        }
       
        printf("\n");
       
        if(strcmp(frase,temporal) == 0) {
            gano = 1;
            break;
        }
       
        printf("\n");
        printf("Letras Acertadas: %d",acertado);
        printf("\n");
        printf("Oportunidades Restantes: %d",oportunidades);
        printf("\n");
   
        rep[j] = pal;
        j++;
       
        if (oportunidades==0)
        {
           break;
        }
     
        printf("Introduzca una letra:");
        scanf("\n%c",&pal);
      
    }while(oportunidades != 0);
   
   
    if(gano) {
                printf("\n\n");
        printf("Felicitaciones, has ganado.");
    }
    else {
                printf("\n\n");
        printf("Lo siento, has perdido.");
    }
   
    printf("\n\n");
    return 0;

}
