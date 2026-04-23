#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    system("color 9");

    int horasTrabajadas;
    int antiguedad;
    const float  PorcentagenAntiguidad = 0.02;
    int const sueldo_basico = 4500;
    float sueldo_neto;
    float sueldo_bruto, plus;
    

    printf("Ingrese cantidad de horas trabajadas: ");
    scanf("%d", &horasTrabajadas);

    printf("Ingrese cantidad de años de antiguedad: ");
    scanf("%d", &antiguedad);

    sueldo_bruto = horasTrabajadas * sueldo_basico ;
    plus = sueldo_bruto * (antiguedad * PorcentagenAntiguidad);
    sueldo_neto = sueldo_bruto + plus;

    printf("El sueldo neto es: %.2f\n", sueldo_neto);


return 0;
   
}