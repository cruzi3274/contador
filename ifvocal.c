#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    system("cls");
    system("color 0A");

    char c = 'u';
    printf("Ingrese un caracter: ");
    scanf("%c", &c);

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||
       c == 'B' || c == 'C' || c == 'D' || c == 'F' || c == 'G'){
        printf("Es un vocal");
        
       }else{
        printf("Es un consonante");
       }

     

       return 0;
} 