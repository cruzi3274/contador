#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define CANTIDAD_EMPLEADOS 6
#define VALOR_HORA 205.0
#define EXTRA_MULTIPLICADOR 1.15

typedef struct {
    char nombre[30];
    char apellido[30];
    char categoria;
    char turno;
    int horasTrabajadas;
    float sueldo;
} Empleado;

// Validar categoría
char validarCategoria() {
    char cat;
    do {
        printf("Ingrese categoría (A, B o C): ");
        scanf(" %c", &cat);
        cat = toupper(cat);
        if (cat != 'A' && cat != 'B' && cat != 'C') {
            printf("Categoría inválida. Intente nuevamente.\n");
        }
    } while (cat != 'A' && cat != 'B' && cat != 'C');
    return cat;
}

// Validar turno
char validarTurno() {
    char turno;
    do {
        printf("Ingrese turno ('D' para diurno, 'N' para nocturno): ");
        scanf(" %c", &turno);
        turno = toupper(turno);
        if (turno != 'D' && turno != 'N') {
            printf("Turno inválido. Intente nuevamente.\n");
        }
    } while (turno != 'D' && turno != 'N');
    return turno;
}

// Validar horas trabajadas
int validarHoras() {
    int horas;
    do {
        printf("Ingrese horas trabajadas en el mes (100 a 225): ");
        scanf("%d", &horas);
        if (horas < 100 || horas > 225) {
            printf("Horas inválidas. Intente nuevamente.\n");
        }
    } while (horas < 100 || horas > 225);
    return horas;
}

// Calcular sueldo según reglas
float calcularSueldo(char turno, int horasTrabajadas) {
    int limite = (turno == 'D') ? 187 : 154;
    float sueldo;
    if (horasTrabajadas <= limite) {
        sueldo = horasTrabajadas * VALOR_HORA;
    } else {
        int horasExtra = horasTrabajadas - limite;
        sueldo = (limite * VALOR_HORA) + (horasExtra * VALOR_HORA * EXTRA_MULTIPLICADOR);
    }
    return sueldo;
}

// Ingresar empleados
void ingresarEmpleados(Empleado empleados[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        printf("\nEmpleado #%d\n", i + 1);
        printf("Ingrese nombre: ");
        scanf("%s", empleados[i].nombre);
        printf("Ingrese apellido: ");
        scanf("%s", empleados[i].apellido);
        empleados[i].categoria = validarCategoria();
        empleados[i].turno = validarTurno();
        empleados[i].horasTrabajadas = validarHoras();
        empleados[i].sueldo = calcularSueldo(empleados[i].turno, empleados[i].horasTrabajadas);
    }
}

// Ordenar por apellido
void ordenarPorApellido(Empleado empleados[], int cantidad) {
    Empleado temp;
    for (int i = 0; i < cantidad - 1; i++) {
        for (int j = i + 1; j < cantidad; j++) {
            if (strcmp(empleados[i].apellido, empleados[j].apellido) > 0) {
                temp = empleados[i];
                empleados[i] = empleados[j];
                empleados[j] = temp;
            }
        }
    }
}

// Mostrar empleados ordenados
void mostrarEmpleados(Empleado empleados[], int cantidad) {
    printf("\nListado de empleados ordenado por apellido:\n");
    printf("-------------------------------------------\n");
    for (int i = 0; i < cantidad; i++) {
        printf("%s, %s - Cat: %c - Turno: %c - Horas: %d - Sueldo: $%.2f\n",
               empleados[i].apellido, empleados[i].nombre,
               empleados[i].categoria, empleados[i].turno,
               empleados[i].horasTrabajadas, empleados[i].sueldo);
    }
}

// Contar categorías
void contarCategorias(Empleado empleados[], int cantidad) {
    int catA = 0, catB = 0, catC = 0;
    for (int i = 0; i < cantidad; i++) {
        switch (empleados[i].categoria) {
            case 'A': catA++; break;
            case 'B': catB++; break;
            case 'C': catC++; break;
        }
    }

    printf("\nCantidad de empleados por categoría:\n");
    printf("Categoría A: %d\n", catA);
    printf("Categoría B: %d\n", catB);
    printf("Categoría C: %d\n", catC);
}

// Mostrar sueldos mayores al promedio
void mostrarMayoresAlPromedio(Empleado empleados[], int cantidad) {
    float suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += empleados[i].sueldo;
    }
    float promedio = suma / cantidad;

    printf("\nEmpleados con sueldo mayor al promedio (%.2f):\n", promedio);
    for (int i = 0; i < cantidad; i++) {
        if (empleados[i].sueldo > promedio) {
            printf("%s\n", empleados[i].apellido);
        }
    }
}

// Mostrar los 3 empleados con peor sueldo
void mostrarPeoresSueldos(Empleado empleados[], int cantidad) {
    // Ordenar por sueldo ascendente
    Empleado temp;
    for (int i = 0; i < cantidad - 1; i++) {
        for (int j = i + 1; j < cantidad; j++) {
            if (empleados[i].sueldo > empleados[j].sueldo) {
                temp = empleados[i];
                empleados[i] = empleados[j];
                empleados[j] = temp;
            }
        }
    }

    printf("\nLos 3 empleados con peor sueldo:\n");
    for (int i = 0; i < 3 && i < cantidad; i++) {
        printf("%s - Sueldo: $%.2f\n", empleados[i].apellido, empleados[i].sueldo);
    }
}

int main() {
    system("cls");
    system("color 0A");
    Empleado empleados[CANTIDAD_EMPLEADOS];

    ingresarEmpleados(empleados, CANTIDAD_EMPLEADOS);
    ordenarPorApellido(empleados, CANTIDAD_EMPLEADOS);
    mostrarEmpleados(empleados, CANTIDAD_EMPLEADOS);
    contarCategorias(empleados, CANTIDAD_EMPLEADOS);
    mostrarMayoresAlPromedio(empleados, CANTIDAD_EMPLEADOS);
    mostrarPeoresSueldos(empleados, CANTIDAD_EMPLEADOS);

    return 0;
}
