#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    system("color 0A");

    char nombre[50];
    int dia,mes,ano;
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Ingrese su dia de nacimiento: ");
    scanf("%d", &dia);
    printf("Ingrese su mes de nacimiento (1 - 12): ");
    scanf("%d", &mes);
    printf("Ingrese su anio de nacimiento: ");
    scanf("%d", &ano);

    switch(mes){
        case 1: 
            printf(" %s nacion el %d de enero de %d\n", nombre, dia, ano);
            break;
        case 2:
            printf(" %s nacion el %d de febrero de %d\n", nombre, dia, ano);
            break;
        case 3:
            printf(" %s nacion el %d de enero de %d\n", nombre, dia, ano);
            break;     
        case 4:
            printf(" %s nacion el %d de marzo de %d\n", nombre, dia, ano);
            break;
        case 5:
            printf(" %s nacion el %d de abril de %d\n", nombre, dia, ano);
            break;
        case 6:
            printf(" %s nacion el %d de febrero de %d\n", nombre, dia, ano);
            break;
        case 7: 
            printf(" %s nacion el %d de mayo de %d\n", nombre, dia, ano);
            break;
        case 8:  
            printf(" %s nacion el %d de junio de %d\n", nombre, dia, ano);
            break;
        case 9:  
            printf(" %s nacion el %d de marzo de %d\n", nombre, dia, ano);
            break;
        case 10: 
            printf(" %s nacion el %d de septiembre de %d\n", nombre, dia, ano);
            break;
        case 11:
            printf(" %s nacion el %d de octubre de %d\n", nombre, dia, ano);
            break;
        case 12:
            printf(" %s nacion el %d de noviembre de %d\n", nombre, dia, ano);
            break;
        case 13: 
            printf("final de programa");
            break;
        default:
            printf("el mes ingresado no existe\n");









    }

    

            
    
    
    
    return 0;
}