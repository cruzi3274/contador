#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    system("color 9");
   
    int num1,num2;
    int mayor,menor;
    printf("ingrese el primer numero: ");
    scanf("%d",&num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&num2);

    if(num1 <= 0 || num2 <= 0){
        printf("Error: no se puede permitir valor negativo o cero.\n");

    }else if(num1 > num2){
        mayor = num1;
        menor = num2;

    }else{
        mayor = num2;
        menor = num1;
    }

    if(mayor % menor == 0){
        printf("El %d es mayor multiplo y %d es menor.\n",mayor,menor);
    }else{
        printf("El %d no se multiplico de %d.\n",mayor,menor);
    }

    

        
      
    return 0;
}