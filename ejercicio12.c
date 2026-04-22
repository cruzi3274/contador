#include <stdio.h>
#include <stdlib.h>



int main(){
    system("cls");
    system("color 0A");

     const int  METRO_POR_KM = 1000;
    int  km;
    int  m;

    printf("Ingrese un valor en km: ");
    scanf("%d", &km);

    m = km * METRO_POR_KM;

    printf("El valor en metro es: %d\n", m);

   

    return 0;

}