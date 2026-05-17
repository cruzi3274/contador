#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    system("color 0A");

   float num1,num2,resultado;
   char op;
   printf("Ingrese el primer numero: ");
   scanf("%f",&num1);

   printf("Ingrese el segundo numero: ");
   scanf("%f",&num2);

   printf("\n MENU DE OPCIONES\n");
   printf("S - suma\n");
   printf("R - resta\n");
   printf("M - multiplicacion\n");
   printf("D - division\n");
   printf("E - final\n");
   scanf(" %c", &op);

   switch(op){
      case 'S':
          resultado = num1 + num2;
          printf("El resultado de suma es: %.2f",resultado);
          break;
      case 'R':
          resultado = num1 - num2;
          printf("El resultado de resta es: %.2f",resultado);
          break;
      case 'M':
          resultado = num1 * num2;
          printf("El resultado de multiplicacion es: %.2f",resultado);
          break;
      case 'D':
          if( num2 > 0){
             resultado = num1 / num2;
             printf("El resultado de division es: %.2f", resultado);
          }else{
             printf("Error: no se puede dividir por cero:");
          }
          break;
      case 'E':
          printf("finalizar programa: ");
          break;
      default:
          printf("Opcion invalida: ");


            



   }
  
















  return 0;
}