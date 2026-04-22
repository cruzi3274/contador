#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 6

typedef struct{
    char nombre[50];
    char apellido[50];
    char categoria;

}Empleado;

int main(){
    Empleados empleados[MAX];

    for(int = 0; i < MAX; i++){
        printf("Empleados %d:\n", i + 1);

        printf("Nombre: ");
        scanf("%s",empleados[i].apellido);

        printf("Apellido: ");
        scanf("%s", empleados[i].apellido);

        do{
            printf("Categoria (A/B/C): ");
            scanf(" %c &empleados[i].categoria");

            empleados[i].categoria = toupper(empleados[i].categoria);
        }while(empleados[i].categoria != 'A' &&
               empleados[i].categoria != 'B' &&
               empleados[i].categoria != 'C');

    }
    empleados temp;
    for(int i = 0; i < ,MAX - 1; i++){
        for(int j = i + 1; j < MAX; J++){
            if(strcmp(empleados[i].apellido, empleados[j].apellido) > 0){
                temp = empleados[i];
                empleados[i] = empleados[j];
                empleados[j] = temp;
            }
        }



    }

}
