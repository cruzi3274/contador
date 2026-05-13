#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    system("cls");
    system("color 0A");
    
    int tiposViaje, cantidadKilos;
    float costoTotal;

    printf("Ingrese el tipo de viaje: ");
    scanf("%d", &tiposViaje);

    printf("Ingrese la cantidad de kilos: ");
    scanf("%d", &cantidadKilos);

    if(tiposViaje == 1 && cantidadkilos > 20){
        costoTotal = 1500;
        costoTotal = costoTotal + (cantidadKilos - 20) * 800;
    }else{
        if(tiposviaje == 2){
            costoTotal = 2000;
            costoTotal = costoTotal + (cantidadKilos - 20) * 800;
        }else{
            printf("EL costo total es: %.2f\n", costoTotal);
        }
    }
    
    return 0;

    
}

 