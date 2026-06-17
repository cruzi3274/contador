#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls ");
    system("color 9");

    int num, cont = 0;
    printf("ingrese el numero: ");
    scanf("%d", &num);

    while(num < 10){
        if(num > 0){
            cont++;
        }

        printf("Ingrese el numero: ");
        scanf("%d", &num);
    }

    printf("total de numero positivos es: %d\n", cont);
    return 0;
}

