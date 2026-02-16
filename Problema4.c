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
            printf("\n1");
            break;
        case 2:
            printf("\n2");
            break;
        case 3:
            printf("\n3");
            break;
        case 4:
            printf("\n4");
            break;
        default:
            printf("\nEsto no es una opción valida.");
    }
    return 0;
}
