/******************************************************
*       # Pontificia Universidad Javeriana #    
*       Autor: Andres Felipe Diaz Torres
*       Fecha: 26 de Agosto del 2025
*       Docente: John Corredor
*       Objetivo: Desafio 2
******************************************************/
//Faltaban las librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *q = NULL;

    printf("Requesting space for \"Goodbye\" \n");

    q = (char *) malloc(strlen("Goodbye") + 1); // reserva espacio para "Goodbye"
	//En caso de que no lo logre
    if (!q) {
        perror("Failed to allocate space because");
        exit(1);
    }

    printf("About to copy \"Goodbye\" to q at address %p \n", (void*)q);

    strcpy(q, "Goodbye");
    printf("String copied\n");
    printf("%s \n", q);

    free(q); // liberar el espacio de memoria

    return 0;
}
