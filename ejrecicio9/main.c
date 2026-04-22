#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CHOFERES 20
#define MAX_CAMIONES 10
#define MAX_VIAJES 100

// Estructuras
typedef struct {
    char id[10];
    char apellido[20];
    double pagoPorViaje;
} Chofer;

typedef struct {
    int id; // 0-9
    double costoPorKm;
} Camion;

typedef struct {
    int idCamion;
    char idChofer[10];
    int kms;
} Viaje;

typedef struct {
    int indexViaje;
    double costoTotal;
} CostoViaje;

// Función para comparar costos para ordenar descendente
int compararCosto(const void *a, const void *b) {
    double costoA = ((CostoViaje*)a)->costoTotal;
    double costoB = ((CostoViaje*)b)->costoTotal;
    return (costoB > costoA) - (costoB < costoA); // Orden descendente
}

// Función para buscar índice de chofer
int buscarChofer(Chofer choferes[], int n, char id[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(choferes[i].id, id) == 0)
            return i;
    }
    return -1;
}

int main() {
    system("cls");
    system("color 0A");
    // Datos de prueba
    Chofer choferes[MAX_CHOFERES] = {
        {"C1", "Gomez", 100.0},
        {"C2", "Perez", 120.0},
        {"C3", "Lopez", 110.0}
    };
    int cantChoferes = 3;

    Camion camiones[MAX_CAMIONES] = {
        {0, 10.0},
        {1, 8.5},
        {2, 12.0}
    };
    int cantCamiones = 3;

    Viaje viajes[MAX_VIAJES] = {
        {0, "C1", 100},
        {1, "C2", 80},
        {0, "C3", 120},
        {2, "C1", 60},
        {1, "C1", 90}
    };
    int cantViajes = 5;

    // A) Calcular el costo de cada viaje y ordenarlo
    CostoViaje costos[MAX_VIAJES];
    for (int i = 0; i < cantViajes; i++) {
        int indexChofer = buscarChofer(choferes, cantChoferes, viajes[i].idChofer);
        double pagoChofer = choferes[indexChofer].pagoPorViaje;
        double costoCamion = camiones[viajes[i].idCamion].costoPorKm * viajes[i].kms;

        costos[i].indexViaje = i;
        costos[i].costoTotal = pagoChofer + costoCamion;
    }

    qsort(costos, cantViajes, sizeof(CostoViaje), compararCosto);

    printf("=== A) Costos de los viajes (orden descendente) ===\n");
    for (int i = 0; i < cantViajes; i++) {
        int idx = costos[i].indexViaje;
        printf("Viaje %d - Chofer: %s - Camion: %d - Kms: %d - Costo total: $%.2f\n",
               idx + 1,
               viajes[idx].idChofer,
               viajes[idx].idCamion,
               viajes[idx].kms,
               costos[i].costoTotal);
    }

    // B) Tabla de cantidad de viajes por chofer y camion
    int tablaViajes[MAX_CHOFERES][MAX_CAMIONES] = {0};

    for (int i = 0; i < cantViajes; i++) {
        int idxChofer = buscarChofer(choferes, cantChoferes, viajes[i].idChofer);
        int idCamion = viajes[i].idCamion;
        if (idxChofer != -1 && idCamion >= 0 && idCamion < MAX_CAMIONES)
            tablaViajes[idxChofer][idCamion]++;
    }

    printf("\n=== B) Cantidad de viajes por Chofer y Camion ===\n");
    printf("%10s", "Chofer\\Cam");
    for (int j = 0; j < cantCamiones; j++) {
        printf("%5d", camiones[j].id);
    }
    printf("\n");

    for (int i = 0; i < cantChoferes; i++) {
        printf("%10s", choferes[i].id);
        for (int j = 0; j < cantCamiones; j++) {
            printf("%5d", tablaViajes[i][j]);
        }
        printf("\n");
    }

    return 0;
}
