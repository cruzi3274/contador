#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls ");
    system("color 9");

    int km = 0, m = 0, cm = 0;
    int distancia;

    printf("Ingrese la distancia en centimetros: ");
    scanf("%d", &distancia);

    // 1. ¿Es lo suficientemente grande para tener Kilómetros? (Mínimo 100.000 cm)
    if (distancia >= 100000) {
        km = distancia / 100000;
        distancia = distancia % 100000; // Nos quedamos con el resto para los metros
    }

    // 2. ¿Lo que quedó es lo suficientemente grande para tener Metros? (Mínimo 100 cm)
    if (distancia >= 100) {
        m = distancia / 100;
        distancia = distancia % 100; // Nos quedamos con el resto para los centímetros
    }

    // 3. Lo que haya quedado al final (sea mucho o poco) son los centímetros
    cm = distancia;

    printf("La distancia es: %d km, %d m, %d cm\n", km, m, cm);
    return 0;
}


