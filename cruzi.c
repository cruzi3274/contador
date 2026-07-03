#include <stdio.h>
#include <stdlib.h>

/*
  int main()
  es la función de entrada que el sistema operativo (windows, linux, etc) va a buscar cuando ordenes
  ejecutar tu programa, es la primera función que se va a ejecutar de tu código siempre.
  
  int: tipo de datos que retorna la función cuando termine su lógica
  main: nombre de la función principal
  (): operadores de llamada a función, sirven para que cuando pongas eln ombre de la función sepa que estás invocando dicha función.
  
  mi_funcion(), C sabe que tiene que invocar o ejecutar el código de esa función.
  
  qué es una función, es un trozo de código o de lógica que cumple un propósito específico, por ejemplo imprimir en pantalla:
  printf("texto a imprimir");
*/

int es_par(int numero)
{
  int resultado;

  if( numero % 2 == 0 )
  {
    resultado = 1; // ES PAR
  }
  else
  {
    resultado = 0; // NO ES PAR
  }
  
  return resultado;
}

int cantidad_de_pares(int numero_inicial, int numero_final)
{
  int cantidad_pares = 0;
  
  for(int numero_actual= numero_inicial; numero_actual <= numero_final; numero_actual++)
  {
    if( es_par(numero_actual) )
    {
      cantidad_pares++;
    }
  }
  
  return cantidad_pares;
}

int main()
{
  // saber la cantidad de numeros pares que hay del 1 al 10 inclusive
  
  //int cantidad_pares = 0;
  
  //cantidad_pares = cantidad_de_pares(1, 10);
  
  //printf("La cantidad de numeros pares es: %d\n", cantidad_pares);
  
  printf("La cantidad de numeros pares desde el 1 al 10 inclusive es: %d\n", cantidad_de_pares(1, 10));
  
  return 0;
}

