#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    system("cls");
    system("color 09");
    
   char palabra[50];
   char clave[] = "MESSI";

   printf("Ingrese la palabra: ");
   gets(palabra);

   if(strcmp(palabra, clave) == 0){
       printf("Acceso concedido! ");
   }else{
       printf("Clave incorrecta!");
   }
    
   system("pause");
   
    
    
    return 0;
}