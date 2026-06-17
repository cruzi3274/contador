#include <stdio.h>
#include <stdlib.h>

 //prototipo
void Mensaje(char[10], int );
int control(void);

int main(){
    system("cls");
    system("color 9");
    char nombre[10];
    int edad, respuesta;

    printf("Ingrese el nombre: ");
    gets(nombre);

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    Mensaje(nombre,edad);

    respuesta = control();
    if(respuesta == 1){
        printf("Salio con exito  ");

    }else{
        printf("La cantraseña es incorrecta ");
    }
   

    return 0;
}
void Mensaje(char nom[10], int edad){
    printf("Bienvenidos, %s\n\n", nom);
    printf("usted tiene %d a%cos\n\n", edad,164);
   

}
int control(void){
    int res, contra;
    printf("Ingrese su contrase%ca: ",164);
    scanf("%d", &contra);
    if(contra == 123){
        res=1;
    }else{
        res=0;
    }
    return res;
}