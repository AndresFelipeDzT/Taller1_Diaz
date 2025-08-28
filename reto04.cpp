/******************************************************
*       # Pontificia Universidad Javeriana #    
*       Autor: Andres Felipe Diaz Torres
*       Fecha: 26 de Agosto del 2025
*       Docente: John Corredor
*       Objetivo: Desafio 4
******************************************************/

//Faltaban las librerias

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *ptr, sum = 0; //Declarar las variables

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int)); // asigna memoria para los enteros

    if (ptr == NULL) { //No lo logro
        printf("Error! memory not allocated.");
        exit(0);
    }

    printf("Enter elements: ");
    for (i = 0; i < n; ++i) {
        scanf("%d", ptr + i);      // leer el valor en la posicion i
        sum += *(ptr + i);         // Lo suma
    }

    printf("Sum = %d\n", sum);

    free(ptr); // liberar la memoria

    return 0; //Antes tenia dos return ahora solo 1
}

