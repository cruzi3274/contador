#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define N 5

int main(){

    system("cls");
    system("color 09");

    int matriz[N][N],i,j, cs = 100, ci = 1;

    srand(time(NULL));
            for(i = 0; i < N; i++){
            

            
                for(j = 0; j < N; j++){
                    matriz[i][j] = rand() % 100;
                }
    
    return 0;
}