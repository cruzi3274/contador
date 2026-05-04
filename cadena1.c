#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("cls");
    system("color 09");

    char cajitas[100] = {'I', 'N', 'M', 'I', 'E', 'N', 'T', 'E', '\0'};
    char aux;
    int i, j;

    // empieza en la primera letra (antes del '\0')
    j = strlen(cajitas) - 1;

    for(i = 0; i < j; i++, j--){
         aux =  cajitas[i];
        cajitas[i] =  cajitas[j];
        cajitas[j] = aux;

    }

    printf("Invertida: %s", cajitas);


    return 0;
}