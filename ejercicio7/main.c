#include <stdio.h>
#include <string.h>

#define CANT_PERSONAS 5

typedef struct {
    int dia;
    int mes;
    int anio;
} Fecha;

typedef struct {
    char calle[30];
    int altura;
    char barrio[30];
} Domicilio;

typedef struct {
    char nombre[30];
    char ocupacion[30];
    Fecha nacimiento;
    Domicilio domicilio;
} Persona;

int main() {
    Persona personas[CANT_PERSONAS];

    printf("=== Carga de personas ===\n");

    for (int i = 0; i < CANT_PERSONAS; i++) {
        printf("\nPersona #%d\n", i + 1);

        printf("Nombre: ");
        scanf(" %[^\n]", personas[i].nombre);

        printf("Ocupación: ");
        scanf(" %[^\n]", personas[i].ocupacion);

        printf("Fecha de nacimiento (día mes año): ");
        scanf("%d %d %d", &personas[i].nacimiento.dia,
                         &personas[i].nacimiento.mes,
                         &personas[i].nacimiento.anio);

        printf("Domicilio - Calle: ");
        scanf(" %[^\n]", personas[i].domicilio.calle);

        printf("Domicilio - Altura: ");
        scanf("%d", &personas[i].domicilio.altura);

        printf("Domicilio - Barrio: ");
        scanf(" %[^\n]", personas[i].domicilio.barrio);
    }

    // Mostrar resultados
    printf("\n=== Listado de personas cargadas ===\n");
    for (int i = 0; i < CANT_PERSONAS; i++) {
        printf("%s, %s, nació el %02d/%02d/%04d y vive en %s %d, %s.\n",
               personas[i].nombre,
               personas[i].ocupacion,
               personas[i].nacimiento.dia,
               personas[i].nacimiento.mes,
               personas[i].nacimiento.anio,
               personas[i].domicilio.calle,
               personas[i].domicilio.altura,
               personas[i].domicilio.barrio);
    }

    return 0;
}
