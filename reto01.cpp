/******************************************************
*       # Pontificia Universidad Javeriana #    
*       Autor: Andres Felipe Diaz Torres
*       Fecha: 26 de Agosto del 2025
*       Docente: John Corredor
*       Objetivo: Desafio 1
******************************************************/
//Faltaban las librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *p = (char*) malloc(100 * sizeof(char)); // asigna suficiente memoria para 100 caracteres
    char *q = (char*) malloc(20 * sizeof(char));  // asigna suficiente memoria para 20 caracteres

    // Imprimir la dirección de memoria de p
    printf("Address of p = %p\n", (void*)p);

    // Copiamos la cadena a p
    strcpy(p, "Hello, I'm the best in Operating Systems!!!");
    printf("%s\n", p);

    printf("About to copy \"Goodbye\" to q\n");

    strcpy(q, "Goodbye");
    printf("String copied\n");
    printf("%s\n", q);

    // Liberaramos la memoria de los dos punteros
    free(q);
    free(p);

    return 0;
}

