#include <stdio.h>
#include <string.h>

#define MAX_CHOFERES 5
#define MAX_CAMIONES 5
#define MAX_VIAJES 10

typedef struct {
    char id[10];
    char apellido[30];
    double pagoPorViaje;
} Chofer;

typedef struct {
    int id; // 0 a 9
    double costoPorKm;
} Camion;

typedef struct {
    int idCamion;
    char idChofer[10];
    int kms;
    double costoTotal; // Calculado
} Viaje;

int buscarIndiceChofer(Chofer choferes[], int n, char id[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(choferes[i].id, id) == 0) {
            return i;
        }
    }
    return -1;
}

double calcularCostoViaje(Viaje v, Chofer choferes[], int nChoferes, Camion camiones[], int nCamiones) {
    double pagoChofer = 0;
    double costoKm = 0;

    // Buscar chofer
    for (int i = 0; i < nChoferes; i++) {
        if (strcmp(choferes[i].id, v.idChofer) == 0) {
            pagoChofer = choferes[i].pagoPorViaje;
            break;
        }
    }

    // Buscar camión
    for (int i = 0; i < nCamiones; i++) {
        if (camiones[i].id == v.idCamion) {
            costoKm = camiones[i].costoPorKm;
            break;
        }
    }

    return pagoChofer + (v.kms * costoKm);
}

void ordenarViajesDescendente(Viaje viajes[], int n) {
    Viaje temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (viajes[i].costoTotal < viajes[j].costoTotal) {
                temp = viajes[i];
                viajes[i] = viajes[j];
                viajes[j] = temp;
            }
        }
    }
}

int main() {
    // Datos simulados
    Chofer choferes[MAX_CHOFERES] = {
        {"C1", "Gomez", 500},
        {"C2", "Lopez", 550},
        {"C3", "Fernandez", 600},
        {"C4", "Diaz", 530},
        {"C5", "Perez", 580}
    };

    Camion camiones[MAX_CAMIONES] = {
        {0, 15.0},
        {1, 12.5},
        {2, 13.0},
        {3, 14.0},
        {4, 11.0}
    };

    Viaje viajes[MAX_VIAJES] = {
        {0, "C1", 100},
        {1, "C2", 80},
        {0, "C1", 120},
        {2, "C3", 70},
        {3, "C4", 90},
        {1, "C2", 110},
        {4, "C5", 60},
        {2, "C3", 95},
        {3, "C4", 105},
        {0, "C1", 130}
    };

    // A) Calcular costo de cada viaje
    for (int i = 0; i < MAX_VIAJES; i++) {
        viajes[i].costoTotal = calcularCostoViaje(viajes[i], choferes, MAX_CHOFERES, camiones, MAX_CAMIONES);
    }

    // Ordenar viajes por costo descendente
    ordenarViajesDescendente(viajes, MAX_VIAJES);

    printf("A) Costos de cada viaje (ordenado descendente):\n");
    printf("----------------------------------------------------------\n");
    printf("Camion | Chofer | KMs | Costo Total\n");
    printf("-------------------------------------\n");
    for (int i = 0; i < MAX_VIAJES; i++) {
        printf("  %d     %s     %3d   $%.2f\n",
               viajes[i].idCamion,
               viajes[i].idChofer,
               viajes[i].kms,
               viajes[i].costoTotal);
    }

    // B) Tabla de cantidad de viajes por chofer y camión
    int tablaViajes[MAX_CHOFERES][MAX_CAMIONES] = {0};

    for (int i = 0; i < MAX_VIAJES; i++) {
        int idxChofer = buscarIndiceChofer(choferes, MAX_CHOFERES, viajes[i].idChofer);
        int idCamion = viajes[i].idCamion;
        if (idxChofer != -1 && idCamion >= 0 && idCamion < MAX_CAMIONES) {
            tablaViajes[idxChofer][idCamion]++;
        }
    }

    printf("\nB) Cantidad de viajes por Chofer y Camión:\n");
    printf("----------------------------------------------------------\n");
    printf("Chofer\\Camion |");
    for (int j = 0; j < MAX_CAMIONES; j++) {
        printf("  %d  ", j);
    }
    printf("\n----------------------------------------------------------\n");

    for (int i = 0; i < MAX_CHOFERES; i++) {
        printf("%12s |", choferes[i].apellido);
        for (int j = 0; j < MAX_CAMIONES; j++) {
            printf(" %2d  ", tablaViajes[i][j]);
        }
        printf("\n");
    }

    return 0;
}
