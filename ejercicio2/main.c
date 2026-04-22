#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_ALUMNOS 10

typedef struct {
    char apellido[30];
    int edad;
    char idioma;
} Alumno;

// Función para validar edad
int validarEdad() {
    int edad;
    do {
        printf("Ingrese edad (14 a 18): ");
        scanf("%d", &edad);
        if (edad < 14 || edad > 18) {
            printf("Edad inválida. Intente nuevamente.\n");
        }
    } while (edad < 14 || edad > 18);
    return edad;
}

// Función para validar idioma
char validarIdioma() {
    char idioma;
    do {
        printf("Ingrese idioma elegido [I]nglés, [F]rancés, [P]ortugués, [A]lemán: ");
        scanf(" %c", &idioma);
        idioma = toupper(idioma);
        if (idioma != 'I' && idioma != 'F' && idioma != 'P' && idioma != 'A') {
            printf("Idioma inválido. Intente nuevamente.\n");
        }
    } while (idioma != 'I' && idioma != 'F' && idioma != 'P' && idioma != 'A');
    return idioma;
}

int main() {
    system("cls");
    system("color 0A");
    Alumno alumnos[MAX_ALUMNOS];
    int cantidad = 0;
    char continuar;

    // Contadores y acumuladores por idioma
    int contI = 0, contF = 0, contP = 0, contA = 0;
    int sumaEdadI = 0, sumaEdadF = 0, sumaEdadP = 0, sumaEdadA = 0;

    do {
        if (cantidad >= MAX_ALUMNOS) {
            printf("\nSe alcanzó el máximo de alumnos (%d).\n", MAX_ALUMNOS);
            break;
        }

        printf("\nAlumno #%d\n", cantidad + 1);
        printf("Ingrese apellido: ");
        scanf("%s", alumnos[cantidad].apellido);
        alumnos[cantidad].edad = validarEdad();
        alumnos[cantidad].idioma = validarIdioma();

        // Actualizar contadores y edades
        switch (alumnos[cantidad].idioma) {
            case 'I':
                contI++;
                sumaEdadI += alumnos[cantidad].edad;
                break;
            case 'F':
                contF++;
                sumaEdadF += alumnos[cantidad].edad;
                break;
            case 'P':
                contP++;
                sumaEdadP += alumnos[cantidad].edad;
                break;
            case 'A':
                contA++;
                sumaEdadA += alumnos[cantidad].edad;
                break;
        }

        cantidad++;

        // Preguntar si desea continuar
        do {
            printf("¿Desea ingresar otro alumno? [S/N]: ");
            scanf(" %c", &continuar);
            continuar = toupper(continuar);
            if (continuar != 'S' && continuar != 'N') {
                printf("Opción inválida. Use 'S' o 'N'.\n");
            }
        } while (continuar != 'S' && continuar != 'N');

    } while (continuar == 'S');

    // Mostrar resultados
    printf("\nResumen de idiomas elegidos:\n");
    if (cantidad == 0) {
        printf("No se ingresaron alumnos.\n");
    } else {
        float porcentajeI = (contI * 100.0) / cantidad;
        float porcentajeF = (contF * 100.0) / cantidad;
        float porcentajeP = (contP * 100.0) / cantidad;
        float porcentajeA = (contA * 100.0) / cantidad;

        printf("Inglés: %.2f%%", porcentajeI);
        if (contI > 0) printf(" - Promedio de edad: %.2f", (float)sumaEdadI / contI);
        printf("\n");

        printf("Francés: %.2f%%", porcentajeF);
        if (contF > 0) printf(" - Promedio de edad: %.2f", (float)sumaEdadF / contF);
        printf("\n");

        printf("Portugués: %.2f%%", porcentajeP);
        if (contP > 0) printf(" - Promedio de edad: %.2f", (float)sumaEdadP / contP);
        printf("\n");

        printf("Alemán: %.2f%%", porcentajeA);
        if (contA > 0) printf(" - Promedio de edad: %.2f", (float)sumaEdadA / contA);
        printf("\n");
    }

    return 0;
}
