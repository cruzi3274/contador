#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    system("color 9");

    int a = 5;
    int b = 8;
    int c ;
    

    printf("%d %d\n", a, b);
    printf("Intercambio de valores\n");
   
    c = a;
    a = b;
    b = c;
   
    printf("%d  %d", a, b);
    

   return 0;

}