#include <stdio.h>
#include <stdlib.h>
 
int main(){
    system("cls");
    system("color 9");

    char letra;
    int a = 0;
    int b = 0;
    int c;

    printf("Ingrese la letra: ");
    scanf(" %c", &letra);
    printf("Ingrese primer numero: ");
    scanf("%d", &a);

    printf("Ingrese segundo numero: ");
    scanf("%d",&b);

    if(a > b){
        c = a;
        a = b;
        b = c;
    }
    while(a <= b){
            if((letra == 'p' || letra == 'P') && (a % 2 == 0)){
                printf("El numero %d es par\n", a);
            }else if((letra == 'i' || letra == 'I')&&(a % 2 != 0)){
                printf("El numero %d es impar\n", a);
            }
            else if(letra != 'p' && letra != 'P' && letra != 'i' && letra != 'I'){
                printf("letra invalida\n");
                break;
            }
            a = a + 1;

    }

    

    return 0;
}