#include <stdio.h>
#include <string.h>
#include <ctype.h>


#define MAX_INMUEBLES 10

typedef struct {
    char barrio[30];
    int ambientes;
    float precio;
} Inmueble;

// Convierte una cadena a minúsculas para comparación sin distinción
void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {


    Inmueble lista[MAX_INMUEBLES] = {
        {"Palermo", 3, 120000},
        {"Belgrano", 2, 95000},
        {"Recoleta", 4, 150000},
        {"Caballito", 2, 85000},
        {"Palermo", 1, 70000},
        {"Villa Urquiza", 3, 110000},
        {"Belgrano", 4, 130000},
        {"Recoleta", 2, 90000},
        {"Caballito", 3, 105000},
        {"Palermo", 2, 95000}
    };

    char barrioBuscado[30], barrioComparado[30];
    int ambientesMin;
    float precioMax;

    printf("=== Búsqueda de inmuebles ===\n");

    // Ingreso de criterios
    printf("Ingrese barrio: ");
    scanf("%s", barrioBuscado);
    printf("Ingrese cantidad mínima de ambientes: ");
    scanf("%d", &ambientesMin);
    printf("Ingrese precio máximo: ");
    scanf("%f", &precioMax);

    // Convertir barrio buscado a minúscula para comparación sin importar mayúsculas
    toLowerCase(barrioBuscado);

    printf("\nInmuebles que cumplen con la búsqueda:\n");
    printf("--------------------------------------------------\n");
    int encontrados = 0;

    for (int i = 0; i < MAX_INMUEBLES; i++) {
        strcpy(barrioComparado, lista[i].barrio);
        toLowerCase(barrioComparado);

        if (strcmp(barrioBuscado, barrioComparado) == 0 &&
            lista[i].ambientes >= ambientesMin &&
            lista[i].precio <= precioMax) {
            printf("Barrio: %s | Ambientes: %d | Precio: $%.2f\n",
                   lista[i].barrio, lista[i].ambientes, lista[i].precio);
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("No se encontraron inmuebles con esas condiciones.\n");
    }

    return 0;
}
