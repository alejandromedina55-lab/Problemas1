//
// Created by Alexm on 09/02/2026.
//
#include <stdio.h>

int main() {
    float lado1, lado2, lado3, lado4, lado5, lado6;
    printf("Otorgue la medida del primer lado de un hexagono.\n");
    scanf("%f",&lado1);
    printf("Otorgue la medida del segundo lado de un hexagono.\n");
    scanf("%f",&lado2);
    printf("Otorgue la medida del tercer lado de un hexagono.\n");
    scanf("%f",&lado3);
    printf("Otorgue la medida del cuarto lado de un hexagono.\n");
    scanf("%f",&lado4);
    printf("Otorgue la medida del quinto lado de un hexagono.\n");
    scanf("%f",&lado5);
    printf("Otorgue la medida del sexto lado de un hexagono.\n");
    scanf("%f",&lado6);

    float resultado= lado1+lado2+lado3+lado4+lado5+lado6;

    printf ("Su hexagono tiene un perimetro de %.2f.", resultado);
    return 0;
}