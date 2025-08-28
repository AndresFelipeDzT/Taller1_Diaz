/******************************************************
*       # Pontificia Universidad Javeriana #    
*       Autor: Andres Felipe Diaz Torres
*       Fecha: 26 de Agosto del 2025
*       Docente: John Corredor
*       Objetivo: Desafio 3
******************************************************/

//Faltaban las librerias
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr; //declara el puntero
    ptr = (int*) malloc(15 * sizeof(*ptr)); // reserva el espacio

    if (ptr != NULL) {
        *(ptr + 5) = 480;  // asigna 480 al sexto entero
        printf("El sexto entero es: %d\n", *(ptr + 5)); //Da 480 por que acabamos de asignarlo
        
        free(ptr); // liberar la memoria
    }

    return 0;
}

