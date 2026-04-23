#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    system("color 9");

    int dia;
    int const segund_por_dia = 86400;
    long long   segund;

    printf("Ingrese cantidad de dia indicado: ");
    scanf("%d", &dia);


    segund = dia * segund_por_dia;
    printf(" La cantida de segund que equivale un dia es: %llds\n", segund);

}