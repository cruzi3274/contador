#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

int main(){
    system("cls ");
    system("color 0A");

    float area, base, altura, perimetro,radio;
    int opcion;

    printf("\n ELEGIR UNA OPCION\n");
    printf("1 - retangulo\n");
    printf("2 - circulo\n");
    scanf("%d", &opcion);

    if(opcion == 1){
        printf("Ingrese la base de rectangulo: ");
        scanf("%f", &base);
        printf("Ingrese el altura de rectangulo: ");
        scanf("%f", &altura);

        area = base * altura;
        perimetro = 2 * (base + altura);

        printf("El area de rectangulo es: %.2f\n", area);
        printf("El perimetro de rectangulo es: %.2f\n", perimetro);
    }else if(opcion == 2){
        printf("Ingrese el radio de circulo: ");
        scanf("%f", &radio);
        area = radio * radio * 3.14;
        perimetro = radio * 2 * 3.14;

        printf("El area de circulo es: %.2f\n", area);
        printf("El perimetro de circulo es: %.2f\n", perimetro);
    }else{
        printf("Opcion invalido\n");
    }
    return 0;
}