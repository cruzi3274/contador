#include <stdio.h>
#include <string.h>

#define MAX_AUTOS 5

typedef struct {
    int numero;
    float cilindrada;
    char tipo[20];
} Motor;

typedef struct {
    char patente[10];
    char marcaModelo[40];
    int kmsRecorridos;
    Motor motor;
} Auto;

int main() {
    Auto autos[MAX_AUTOS];

    printf("=== Carga de autos ===\n");

    for (int i = 0; i < MAX_AUTOS; i++) {
        printf("\nAuto #%d\n", i + 1);

        printf("Patente: ");
        scanf(" %[^\n]", autos[i].patente);

        printf("Marca y modelo: ");
        scanf(" %[^\n]", autos[i].marcaModelo);

        printf("Kms. recorridos: ");
        scanf("%d", &autos[i].kmsRecorridos);

        printf("Número de motor: ");
        scanf("%d", &autos[i].motor.numero);

        printf("Cilindrada del motor: ");
        scanf("%f", &autos[i].motor.cilindrada);

        printf("Tipo de motor (Nafta/Diesel/etc.): ");
        scanf(" %[^\n]", autos[i].motor.tipo);
    }

    // A) Marca-modelo y cilindrada de autos con cilindrada > 1.8
    printf("\nA) Autos con cilindrada mayor a 1.8:\n");
    for (int i = 0; i < MAX_AUTOS; i++) {
        if (autos[i].motor.cilindrada > 1.8) {
            printf("- %s (Cilindrada: %.1f)\n", autos[i].marcaModelo, autos[i].motor.cilindrada);
        }
    }

    // B) Números de motor de tipo Diesel
    printf("\nB) Números de motor de tipo Diesel:\n");
    for (int i = 0; i < MAX_AUTOS; i++) {
        if (strcasecmp(autos[i].motor.tipo, "Diesel") == 0) {
            printf("- Motor #%d\n", autos[i].motor.numero);
        }
    }

    // C) Patente y tipo de motor de autos con < 10000 kms recorridos
    printf("\nC) Autos con menos de 10000 kms recorridos:\n");
    for (int i = 0; i < MAX_AUTOS; i++) {
        if (autos[i].kmsRecorridos < 10000) {
            printf("- Patente: %s | Tipo de motor: %s\n", autos[i].patente, autos[i].motor.tipo);
        }
    }

    return 0;
}
