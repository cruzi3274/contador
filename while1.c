#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    system("cls");
    system("color 9");
    
    int num;
    float fact = 1;

    printf("Ingrese el numero: ");
    scanf("%d", &num);

    while(num >= 0){
       

        if(num >= 0){
            fact = fact * num;

        }else{
            printf("El numero debe ser mayor o igual a cero.\n");
        }
    }
    printf("El factorial es: %.f\n", fact);
    

    return 0;
}
