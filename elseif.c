#include <stdio.h>
#include <stdlib.h>

#define MAX_TAREAS 10
#define MAX_TEXTO 100

// Definimos qué es una "Tarea"
struct Tarea {
    char descripcion[MAX_TEXTO];
    int completada;
};

int main() {
    system("cls");
    system("color 9");
    
    struct Tarea lista[MAX_TAREAS];
    int totalTareas = 0;
    int opcion;

    do {
        printf("\n--- GESTOR DE TAREAS ---\n");
        printf("1. Agregar tarea\n");
        printf("2. Ver tareas\n");
        printf("3. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);
        getchar(); // Limpiar el buffer para el próximo texto

        switch(opcion) {
            case 1:
                if (totalTareas < MAX_TAREAS) {
                    printf("Escribe la tarea: ");
                    fgets(lista[totalTareas].descripcion, MAX_TEXTO, stdin);
                    
                    // Quitar el salto de linea que deja fgets
                    lista[totalTareas].descripcion[strcspn(lista[totalTareas].descripcion, "\n")] = 0;
                    
                    lista[totalTareas].completada = 0;
                    totalTareas++;
                    printf("¡Tarea guardada!\n");
                } else {
                    printf("Lista llena.\n");
                }
                break;

            case 2:
                printf("\n--- TAREAS PENDIENTES ---\n");
                for (int i = 0; i < totalTareas; i++) {
                    printf("[%d] %s\n", i + 1, lista[i].descripcion);
                }
                if (totalTareas == 0) printf("No hay tareas hoy.\n");
                break;

            case 3:
                printf("Cerrando aplicacion...\n");
                break;

            default:
                printf("Opcion no valida.\n");
        }
    } while (opcion != 3);

    return 0;
}