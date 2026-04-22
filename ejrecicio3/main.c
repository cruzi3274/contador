#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define TOTAL_CARTAS 48

typedef struct {
    int numero;      // del 1 al 12
    char palo[10];   // Oro, Espada, Basto, Copa
} Carta;

// Cargar todas las cartas
void inicializarCartas(Carta mazo[]) {
    const char *palos[] = {"Oro", "Espada", "Basto", "Copa"};
    int index = 0;

    for (int p = 0; p < 4; p++) {
        for (int n = 1; n <= 12; n++) {
            mazo[index].numero = n;
            strcpy(mazo[index].palo, palos[p]);
            index++;
        }
    }
}

// Barajar el mazo
void barajarCartas(Carta mazo[]) {
    for (int i = 0; i < TOTAL_CARTAS; i++) {
        int j = rand() % TOTAL_CARTAS;
        Carta temp = mazo[i];
        mazo[i] = mazo[j];
        mazo[j] = temp;
    }
}

// Mostrar una carta
void mostrarCarta(Carta c) {
    printf("Carta: %d de %s\n", c.numero, c.palo);
}

// Esperar tecla
void esperarTecla() {
    printf("Presione ENTER para sacar una carta...");
    while (getchar() != '\n');
}

int main() {
    system("cls");
    system("color 0A");

    Carta mazo[TOTAL_CARTAS];
    int puntaje = 0;

    srand(time(NULL)); // semilla aleatoria

    inicializarCartas(mazo);
    barajarCartas(mazo);

    printf("=== JUEGO: COLA SUCIA ===\n");
    printf("Saca cartas una a una. Si aparece el 1 de Oro... ¡perdés!\n\n");

    for (int i = 0; i < TOTAL_CARTAS; i++) {
        esperarTecla();
        mostrarCarta(mazo[i]);

        if (mazo[i].numero == 1 && strcmp(mazo[i].palo, "Oro") == 0) {
            printf("\n¡Perdiste! Salió el 1 de Oro.\n");
            break;
        }

        puntaje++;
    }

    printf("\nTu puntaje fue: %d carta%s sacada%s.\n",
           puntaje, (puntaje == 1) ? "" : "s", (puntaje == 1) ? "" : "s");

    return 0;
}
