#include <stdio.h>
#include <stdlib.h>



int main()
{
    system("cls ");
    system("color 0A");

    int anio_actual,anio_cualquiera, anio;
    printf("Ingrese el anio actual: ");
    scanf("%d",&anio_actual);
    printf("Ingrese el  anio cualquiera: ");
    scanf("%d",&anio_cualquiera);

    anio = anio_actual - anio_cualquiera;

    if(anio > 0){
        printf("Ha pasado %d anio desde %d.\n",anio,anio_cualquiera);
    }else if(anio < 0){
        printf("falta %d anio para a  %d",anio, anio_cualquiera);
    }else{
        printf("Es el mismo anio.\n");
    }
    return 0;
}