#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    system("color 09");

   
        int ventasCola, ventasNeranja, ventasLimonadas;
        int precioCola, precioNaranja, precioLimonadas;
        int totalCola, totalNaranja, totalLimonadas, totalGeneral;

        // Entrada
        printf("Ingrese ventas de cola: ");
        scanf("%d", &ventasCola);
        printf("Ingrese precio de cola:");
        scanf("%d", &precioCola);

        printf("Ingrese ventas de Naranja: ");
        scanf("%d", &ventasNeranja);
        printf("Ingrese precio de Naranja: ");
        scanf("%d", &precioNaranja);

        printf("Inrese venta de Limonadas: ");
        scanf("%d", &ventasLimonadas);
        printf("Ingrese precio de Limonadas: ");
        scanf("%d", &precioLimonadas);

        // proceso
        totalCola = ventasCola * precioCola;
        totalNaranja = ventasNeranja * precioNaranja;
        totalLimonadas = ventasLimonadas * precioLimonadas;
        totalGeneral = totalCola + totalNaranja + totalLimonadas;

        // salida
        printf("\n| PRODUCTO | VENTAS | PRECIO | TOTAL |\n");
        printf("| COLA       | %6d    | %6d    | %d    |\n", ventasCola, precioCola, totalCola);
        printf("| NARANJA    | %6d    | %6d    | %d    |\n", ventasNeranja, precioNaranja, totalNaranja);
        printf("| LIMONADAS  | %6d    | %6d    | %d    |\n", ventasLimonadas, precioLimonadas, totalLimonadas);
        printf("| TOTAL      |        |        | %d      |\n", totalGeneral);
        return 0;
    
}