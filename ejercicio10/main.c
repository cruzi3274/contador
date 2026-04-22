#include <stdio.h>
#include <string.h>

#define MAX_AUTOS 100

// Estructura para Motor
typedef struct {
    char numero[20];
    float cilindrada;
    char tipo[20]; // "Diesel", "Nafta", etc.
} Motor;

// Estructura para Automóvil
typedef struct {
    char patente[10];
    char marcaModelo[50];
    int kmsRecorridos;
    Motor motor;
} Auto;

int main() {
    system("cls");
    system("color 0A");
    Auto autos[MAX_AUTOS] = {
        {"ABC123", "Toyota Corolla", 15000, {"M001", 1.6, "Nafta"}},
        {"DEF456", "Ford Ranger", 8000, {"M002", 2.5, "Diesel"}},
        {"GHI789", "Peugeot 208", 9500, {"M003", 1.2, "Nafta"}},
        {"JKL012", "Chevrolet S10", 20000, {"M004", 2.8, "Diesel"}},
        {"MNO345", "Volkswagen Gol", 5000, {"M005", 1.9, "Nafta"}},
    };
    int cantAutos = 5;

    // A) Marca-modelo y cilindrada de los automóviles con cilindrada > 1.8
    printf("=== A) Autos con cilindrada mayor a 1.8 ===\n");
    for (int i = 0; i < cantAutos; i++) {
        if (autos[i].motor.cilindrada > 1.8) {
            printf("Marca-Modelo: %s - Cilindrada: %.1f\n",
                   autos[i].marcaModelo, autos[i].motor.cilindrada);
        }
    }

    // B) Números de motor de tipo Diesel
    printf("\n=== B) Números de motor de tipo Diesel ===\n");
    for (int i = 0; i < cantAutos; i++) {
        if (strcmp(autos[i].motor.tipo, "Diesel") == 0) {
            printf("Número de motor: %s\n", autos[i].motor.numero);
        }
    }

    // C) Patente y tipo de motor de autos con menos de 10000 kms
    printf("\n=== C) Autos con menos de 10000 kms recorridos ===\n");
    for (int i = 0; i < cantAutos; i++) {
        if (autos[i].kmsRecorridos < 10000) {
            printf("Patente: %s - Tipo de motor: %s\n",
                   autos[i].patente, autos[i].motor.tipo);
        }
    }

    return 0;
}
