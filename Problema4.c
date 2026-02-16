//
// Created by Alexm on 09/02/2026.
//
#include <stdio.h>

int main() {
    int eleccion;
    printf("Escoja una de estas opciones.\n");
    printf("1) Determinar si el numero es par o impar\n");
    printf("2) Elevar un numero a una potencia\n");
    printf("3) Calcular la raiz cuadrada de un número\n");
    printf("4) Terminar el programa\n\n");
    printf("Inserte el número de la cosa a realizar: ");
    scanf("%d", &eleccion);


    switch(eleccion){
        case 1:
            printf("\nPara saber si un numero es impar o par, debes de hacer la operación [variable]%2, si el resultado te da 0 entonces es par, sino entonces no lo es.");
            break;
        case 2:
            printf("La operación que se ocupa para esto es [variable] * [variable], o bien [variable] * n donde n es igual a otro número dado por el usuario o por el programa.");
            break;
        case 3:
            printf("La operación que se ocupa añadir la librería <math.h>, utilizando en, por ejemplo raiz=sqrt([variable]) el como sacar la raíz.");
            break;
        case 4:
            printf("Esta opción terminaría el programa. Presuntamente esto se usaría en un ciclo en donde la única forma de detenerlo sería escoger esta opción.");
            break;
        default:
            printf("Esto no es una opción valida.");
    }
    return 0;
}
