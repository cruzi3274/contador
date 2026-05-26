#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    system("color 0A");

    char nombre[50];
    int nota;

    printf("Ingrese su nombre: ");
    scanf("%s", nombre);

    printf("Ingrese la nota de una alumno (1 - 10): ");
    scanf("%d", &nota);

    if(nota == 10){
        printf("El %s obtuvo un sobresaliente!",nombre);

    }else if(nota >= 8 && nota <= 9){
        printf("El %s obtuvo un Distinguido!",nombre);
    }else if(nota >= 6 && nota <= 7){
        printf("EL %s obtuvo un bueno!",nombre);
    }else if(nota >= 4  && nota <= 5){
        printf("El %s obtuvo un aprovado!",nombre);
    }else if(nota >= 1 && nota <= 3){
        printf("El %s obtuvo un reprovado!",nombre);
    }else{
        printf(" EL resultado invalido: ");

    };
    

    return 0;



}