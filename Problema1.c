//
// Created by Alexm on 09/02/2026.
//
#include <stdio.h>

int main() {
    float altura, anchura, longitud;
    printf("Te dire cuantos pies cubicos mide un cuadrado, pero debes de otorgarme varios datos.\n");
    printf("Otorgue la altura de la figura.\n");
    scanf("%f", &altura);
    printf("Otorgue la anchura de la figura.\n");
    scanf("%f", &anchura);
    printf("Otorgue la longitud de la figura.\n");
    scanf("%f", &longitud);

    float cubico, cubico2;
    cubico= altura * anchura * longitud;
    printf("Tu cuadrado posee %.2fft^3\n",cubico);

    cubico2= cubico/35.3146612;
    printf("Por el otro lado, en metros cubicos mide %.2fft^2",cubico2);
    return 0;
}