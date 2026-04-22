#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_CLIENTES 5
#define MAX_PEDIDOS 10

typedef struct {
    int codigo;
    char apellido[30];
    char pais[30];
} Cliente;

typedef struct {
    int codigoPedido;
    int codigoCliente;
    float costo;
} Pedido;

// Convierte una cadena a minúsculas
void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {

    system("cls");
    system("color 0A");

    // Datos simulados
    Cliente clientes[MAX_CLIENTES] = {
        {1, "Gomez", "Argentina"},
        {2, "Smith", "USA"},
        {3, "Lopez", "Argentina"},
        {4, "Kowalski", "Polonia"},
        {5, "Tanaka", "Japón"}
    };

    Pedido pedidos[MAX_PEDIDOS] = {
        {100, 1, 1500.50},
        {101, 2, 2300.00},
        {102, 1, 800.00},
        {103, 3, 1200.00},
        {104, 4, 3000.00},
        {105, 5, 1800.00},
        {106, 3, 950.00},
        {107, 1, 1600.00},
        {108, 2, 2100.00},
        {109, 1, 700.00}
    };

    char paisBuscado[30], paisCliente[30];
    float recaudacion = 0;

    // A) Recaudación por país
    printf("Ingrese un país: ");
    scanf("%s", paisBuscado);
    toLowerCase(paisBuscado);

    for (int i = 0; i < MAX_PEDIDOS; i++) {
        int codCli = pedidos[i].codigoCliente;
        for (int j = 0; j < MAX_CLIENTES; j++) {
            if (clientes[j].codigo == codCli) {
                strcpy(paisCliente, clientes[j].pais);
                toLowerCase(paisCliente);
                if (strcmp(paisCliente, paisBuscado) == 0) {
                    recaudacion += pedidos[i].costo;
                }
                break;
            }
        }
    }

    printf("\nA) Recaudación total esperada de %s: $%.2f\n", paisBuscado, recaudacion);

    // B) Cliente con más pedidos
    int contadorPedidos[MAX_CLIENTES] = {0};

    for (int i = 0; i < MAX_PEDIDOS; i++) {
        int codCli = pedidos[i].codigoCliente;
        for (int j = 0; j < MAX_CLIENTES; j++) {
            if (clientes[j].codigo == codCli) {
                contadorPedidos[j]++;
                break;
            }
        }
    }

    int maxPedidos = 0;
    char apellidoGanador[30];

    for (int i = 0; i < MAX_CLIENTES; i++) {
        if (contadorPedidos[i] > maxPedidos) {
            maxPedidos = contadorPedidos[i];
            strcpy(apellidoGanador, clientes[i].apellido);
        }
    }

    printf("\nB) Cliente con más pedidos: %s (%d pedidos)\n", apellidoGanador, maxPedidos);

    return 0;
}
