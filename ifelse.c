#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    system("color 0A");

    int num1, num2;
    printf("Ingrese primer numero: ");
    scanf("%d", &num1);

    printf("INgrese segundo numero: ");
    scanf("%d", &num2);

    if(num1 == num2 ){
        printf("%d es igual a %d", num1, num2);
    }else{
        printf("%d es distinto de %d\n", num1, num2);
    }
      




    return 0;
}