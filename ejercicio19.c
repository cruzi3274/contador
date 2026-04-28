#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    system("color 09");

   int num;
   int centena, decenas, unidades;

    printf("Ingrese un numero entero de tres cifras: ");
    scanf("%d", &num);

    centena = num / 100;
    decenas = (num / 10) % 10;
    unidades = num % 10;

    printf("Centenas: %d\n", centena);
    printf("Decenas: %d\n", decenas);
    printf("Unidades: %d\n", unidades);


    printf(" separados : %d - %d -  %d\n", centena, decenas, unidades);

    return 0;
}