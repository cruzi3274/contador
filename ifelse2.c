#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    system("color 0A");

    int num;
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    if(num %2 == 0){
        printf("%d es par", num);
    }else{
        printf("%d es impar", num);
    }

    return 0;

}



