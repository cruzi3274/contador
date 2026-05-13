#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    system("color 9");

    int num1, num2, opcion;
    int sumar, restar, multiplicar;
    float division; 

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("\n--- MENU ---- :\n");
    printf("1 - sumar\n");
    printf("2 - restar\n");
    printf("3 - multiplicar\n");
    printf("4 - division\n");
    printf("5 - salir\n");

    scanf("%d", &opcion);

    switch(opcion){
        case 1:
            sumar = num1 + num2;
            printf("La suma es: %d\n", sumar);
            break;
        case 2:
            restar = num1 - num2;
            printf("La resta es: %d\n", restar);
            break;
        case 3:
            multiplicar = num1 * num2;
            printf("El multiplicacion es: %d\n", multiplicar);
            break;
        case 4:
            if(num2 != 0){
                division = (float) num1 / num2;
                printf("La division es: %.2f\n", division);
            }else{
                printf("Error: no se puede dividir por cero.\n");
            
            }
            break;
        case 5:
            printf("saliendo del progrma...\n");
        default:
            printf("La opcion invalida");
            break;



    }
}