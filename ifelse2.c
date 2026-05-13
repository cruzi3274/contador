#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    system("color 0A");

    int tiposViajes, cantidadKilos;
    float costoViaje;

    printf("Ingrese el tipo de viaje: ");
    scanf("%d", &tiposViajes);

    printf("Ingrese la cantidad de kilos: ");
    scanf("%d", &cantidadKilos);

    if(tiposViajes == 1){
        costoViaje = 1500;
        if(cantidadKilos > 20){
            costoViaje = costoViaje + (cantidadKilos - 20) * 800;
        }
    }else if(tiposViajes == 2){
        costoViaje = 2000;
        if(cantidadKilos > 20){
            costoViaje = costoViaje + ((cantidadKilos - 20) / 5) * 800;

           

        }
    }

     printf("El costo del viaje es: %.2ff", costoViaje);




    return 0;

}



