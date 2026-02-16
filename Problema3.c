//
// Created by Alexm on 09/02/2026.
//
#include <stdio.h>

int main() {
    int edad;
    printf("Inserte su edad: ");
    scanf ("%d",&edad);
    printf ("Usted nacio en el año %d, posiblemente %d.", (2026-edad), (2025-edad));
    return 0;
}