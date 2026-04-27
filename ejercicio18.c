#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    system("cls");
    system("color 9");
    
    float hipotenusa;
    int cateta1;
    int cateta2;

    printf("Ingrese la primera cateta: ");
    scanf("%d", &cateta1);

    printf("Ingrese la segunda cateta: ");
    scanf("%d", &cateta2);

    hipotenusa = sqrt(cateta1 * cateta1 + cateta2 *cateta2);

    printf("La hipotenusa es: %.2f\n", hipotenusa);

    return 0;

}