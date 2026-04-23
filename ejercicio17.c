#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    system("color 9");

   int numero, ultima;

   printf("Ingrese un numero entero positivo de dos cifras: ");
   scanf("%d", &numero);

   ultima = numero % 10;

   printf("El ultimo cifra es: %d\n", ultima);
    return 0;
}