#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototipos
void Mensaje(char nombre[50]);
void Ingreso(int *n1, int *n2);
int Suma(int a, int b);
void Salida(int a, int b, int resultado);

int main() {
    system("cls");
    system("color 9");

    int n1, n2, resultado;
    char nombre[50];

    Mensaje(nombre);
    Ingreso(&n1, &n2);

    resultado = Suma(n1, n2);
    Salida(n1, n2, resultado);

    return 0;
}

void Mensaje(char nombre[50]) {
    printf("ingrese su nombre: ");

    // Lee una línea completa de texto (evita gets)
    if (fgets(nombre, 50, stdin) == NULL) {
        nombre[0] = '\0';
        return;
    }

    // Elimina el salto de línea si existe
    nombre[strcspn(nombre, "\n")] = '\0';
}

void Ingreso(int *n1, int *n2) {
    printf("Ingrese primer numero: ");
    scanf("%d", n1);

    printf("Ingrese segundo numero: ");
    scanf("%d", n2);
}

int Suma(int a, int b) {
    return a + b;
}

void Salida(int a, int b, int resultado) {
    printf("-----------------------------------\n");
    printf("Los numeros ingresados fueron: %d y %d\n", a, b);
    printf("El resultado de la suma es: %d\n", resultado);
    printf("-----------------------------------\n");
}

