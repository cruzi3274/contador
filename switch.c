#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14


int main()
{
    system("cls ");
    system("color 0A");

    float area, perimetro,base,altura,radio;
    int opcion;

    printf("\n--- MENU DE OPCION ---\n");
    printf("1 - rectangulo\n");
    printf("2 - circulo\n");
    printf("3 - final\n");
    scanf("%d", &opcion);

    switch(opcion){
        case 1:
            printf("Ingrese la base de rectangulo: ");
            scanf("%f",&base);
            printf("Ingrese altura de rerctangulo: ");
            scanf("%f",&altura);
            area = base * altura;
            perimetro = 2 * (base + altura);
            printf("EL area de rectangulo es: %.2f\n", area);
            printf("El perimetro de rectangulo es: %.2f\n", perimetro);
            break;

        case 2:
            printf("Ingrese el radio: ");
            scanf("%f",&radio);

            area = radio * radio * 3.14;
            perimetro = radio * 2 * 3.14;

            printf("El area de circulo es: %.2f\n", area);
            printf("El perimetro de circulo es: %.2f\n", perimetro);
            break;

        case 3:
            printf("programa finalizado.\n");
            break;

        default:
            printf("opcion invalido.\n");
            break;


    }

    return 0;
}
