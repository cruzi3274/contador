#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    system("color 0A");

    int num1, num2;
    int suma,resta;
    int mutiplicar;
    float dividir;

    printf("Ingrese primer numero entero: ");
    scanf("%d", &num1);

    printf("Ingrese segundo numero entero: ");
    scanf("%d", &num2);

    suma = num1 +  num2;
    resta = num1 - num2;
    mutiplicar = num1 * num2;
    dividir = num1 / num2;

    printf("La suma es: %d\n", suma);
    printf("La resta es: %d\n", resta);
    printf("La multiplicacion es: %d\n", mutiplicar);
    printf("La division es: %.2f\n", dividir);
  


    return 0;
}