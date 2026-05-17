#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    system("cls");
    system("color 0A");

    char mensaje[100];

    printf("¿Que te puso ella? ");
    // Paso 1: Usá fgets para guardar lo que el usuario escribe en 'mensaje'
    fgets(mensaje, 100, stdin);

    // Paso 2: Usá strstr para ver si "chau" está en 'mensaje'
    // Pista: if (strstr(mensaje, "chau") != NULL) { ... }
    if ( strstr(mensaje, "  respuesta") != NULL ) {
        printf("IA: No te despidas seco, decile que sueñe con vos.\n");
    } else {
        printf("IA: Todavia no se despidio, segui remando.\n");
    }

    return 0;
}
