#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    system("color 9");

    int dias, horas, minutos, segundos;
    int total_segundo;
    const int segundo_POR_DIAS = 86400;
    const int segundo_POR_HORAS = 3600;
    const int segundo_POR_MINUTOS = 60;

    printf("Ingrese cantidad de segundos: ");
    scanf("%d", &total_segundo);

    dias =  total_segundo / segundo_POR_DIAS;
    total_segundo = total_segundo % segundo_POR_DIAS;

    horas =  total_segundo / segundo_POR_HORAS;
    total_segundo = total_segundo % segundo_POR_HORAS;

    minutos =  total_segundo / segundo_POR_MINUTOS;
    segundos = total_segundo % segundo_POR_MINUTOS;

    printf("Equivale a: %d dias, %d horas, %d minutos y %d segundos\n", dias, horas, minutos, segundos);    


}