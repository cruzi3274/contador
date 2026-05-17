#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Función para pasar todo a minúsculas (así detecta "Hola" o "hola")
void aMinusculas(char cadena[]) {
    for(int i = 0; cadena[i]; i++) {
        cadena[i] = tolower(cadena[i]);
    }
}

int main() {
    system("cls");
    system("color 9");
    
    char mensaje[200];
    int modo;

    printf("--- AI WINGMAN PRO (Nivel Facultad) ---\n");
    printf("Elegi el mood de respuesta:\n1. Provocativo\n2. Amoroso\n3. Relacion/Consejo\n");
    printf("Seleccion: ");
    scanf("%d", &modo);
    getchar(); // Limpiar el buffer

    printf("\n¿Que te puso ella? ");
    fgets(mensaje, sizeof(mensaje), stdin);
    aMinusculas(mensaje);

    printf("\n[AI Sugerencia]: ");

    if (modo == 1) { // MODO PROVOCATIVO
        if (strstr(mensaje, "hola") || strstr(mensaje, "como estas")) {
            printf("No le pongas 'bien y vos'. Decile: 'Andaba bien, pero ahora que me hablaste estoy mejor, ¿que me vas a contar?'\n");
        } else if (strlen(mensaje) < 5) {
            printf("Te esta hablando cortante. Tirale: 'Uy, se ve que hoy las palabras te salen caras, ¿te cobraron el mensaje?'\n");
        } else {
            printf("Mantené el misterio. Respondé con un emoji o algo que la obligue a preguntar.\n");
        }
    } 
    else if (modo == 2) { // MODO AMOROSO
        if (strstr(mensaje, "extraño") || strstr(mensaje, "te quiero")) {
            printf("Momento clave. Decile: 'Me haces falta por aca, se siente el vacio sin tus locuras.'\n");
        } else {
            printf("Decile algo sobre su personalidad, no sobre su fisico. Garpa mas.\n");
        }
    }
    else if (modo == 3) { // CONSEJOS GENERALES
        if (strstr(mensaje, "?")) {
            printf("Si te hace muchas preguntas, le interesas. No las respondas todas juntas, deja que ella tambien se esfuerce.\n");
        } else {
            printf("Si no te pregunta nada, hacele una pregunta abierta sobre algo que le guste (musica, gimnasio, etc).\n");
        }
    }

    return 0;
}

