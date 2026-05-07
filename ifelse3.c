#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    system("color 0A");
    

    int num1, num2, num3;
    printf("Ingrese primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese tercer numero: ");
    scanf("%d", &num3);

   if(num1 > num2 && num1 > num3){
        printf("%d es el mayor", num1);


    return 0;
}