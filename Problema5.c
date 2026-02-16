//
// Created by Alexm on 09/02/2026.
//
#include <stdio.h>

int main() {
    char eleccion;
    printf("Escoja una de estas opciones.\n");
    printf("A) Calcular el área de un triángulo\n");
    printf("B) Calcular el perímetro de un triángulo\n");
    printf("C) Conocer el tipo de triángulo que se forma\n");
    printf("D) Terminar el programa\n\n");

    printf("Inserte el número de la cosa a realizar: ");
    scanf("%c", &eleccion);

    switch(eleccion){
        case 'A':
        case 'a':
            printf("Para calcular el área de un triángulo debe de usar la operación (base * altura) / 2.");
            break;
        case 'B':
        case 'b':
            printf("Para calcular el perímetro de un triángulo debe de usar la operación lado1 + lado2 + lado3.");
            break;
        case 'C':
        case 'c':
            printf("Para este apartado se deberá de crear un código que mida cuanto miden los lados del triángulo entre si para saber si es un triángulo equilatero, isoceles o escaleno. El programa de igual forma debería de tomar en consideración el ángulo de los triángulos para saber siquiera si son posibles.");
            break;
        case 'D':
        case 'd':
            printf("Esta opción terminaría el programa. Presuntamente esto se usaría en un ciclo en donde la única forma de detenerlo sería escoger esta opción.");
            break;
        default:
            printf("Esto no es una opción valida.");
    }

    return 0;
}