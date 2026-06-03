#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls ");
    system("color 0A");

    float renta, porcentaje_Impositivo;
    printf("Cual es su renta mensaul: ");
    scanf("%f", &renta);

    if(renta < 100000){
        porcentaje_Impositivo = renta * 0.05;
    }else if(renta <= 350000){
        porcentaje_Impositivo = renta * 0.15;
    }else if(renta <= 700000){
        porcentaje_Impositivo = renta *  0.20;
    }else if(renta > 1000000){
        porcentaje_Impositivo = renta *  0.45;
    }else{
        printf("Error al ingresar la renta.\n");
        return 0;
    }

    printf("EL porcentaje impositivo es: %.2f\n", porcentaje_Impositivo);

    return 0;
}   