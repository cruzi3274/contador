#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    system("color 9");

    int i, num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    while(num < 0 || num > 10){
        printf("Error: ingrese un numero entre (0 y 10): ");
        printf("\nIngrese un numero: ");
        scanf("%d", &num);
    }

    printf("La tabla de multiplicacion.\n");
    for(i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

