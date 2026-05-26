#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    system("cls ");
    system("color 0A");

    int x;
    float num;
    printf("Ingrese un numero entero: ");
    scanf("%f",&num);

    printf("\n--- MENU DE OPCIONES ---\n");
    printf("(1) EL TRIPLE\n");
    printf("(2) EL CUADRADO\n");
    printf("(3) LOGARITMO NATURAL\n");
    printf("(4) LOGARITMO DECIMAL\n");
    printf("Escribe el numero de la opcion que desees: \n");
    scanf("%d",&x);

    switch(x){
        case 1:{
             printf("El triple de %.2f es: %.2f\n", num,num * 3);
             break;
        }

        case 2:{
            float cuadrado = num * num;
            printf("El cuadrado es: %.2f",cuadrado);
            break;
        }

        case 3:{
            if(num > 0){
                double log_natural = log(num);
                printf("El logaritmo natural es: %.4f\n",log_natural);
            }else{
                printf("Error: No logaritmo de numeros menores o iguales a cero.\n");

            }
            break;
        }

        case 4:{
             if(num > 0){
                double log_decimal = log10(num);
                printf("El logaritmo natural es:%.4f\n", log_decimal);
            }else{
                printf("Error: No logaritmo de numero menores o iguales a cero.\n");

            }
            break;
        }


        default:
            printf("Opcion invalida\n");
            break;
    }










    return 0;
}
