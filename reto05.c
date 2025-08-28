/******************************************************
*       # Pontificia Universidad Javeriana #    
*       Autor: Andres Felipe Diaz Torres
*       Fecha: 26 de Agosto del 2025
*       Docente: John Corredor
*       Objetivo: Desafio 5
******************************************************/

//Faltaban las librerias

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, i, n1, n2; //Declarar variables

    printf("Enter size: ");
    scanf("%d", &n1);

    ptr = (int*) malloc(n1 * sizeof(int)); // reservar de memoria

    if (ptr == NULL) { //Si no lo logra
        printf("Error! memory not allocated.\n");
        return 1;
    }

    printf("Addresses of previously allocated memory:\n"); //Muestra las direcciones antes de pedir el nuevo tamaro
    for (i = 0; i < n1; ++i) {
        printf("p[%d] = %p\n", i, (void*)(ptr + i));
    }

    printf("\nEnter the new size: ");
    scanf("%d", &n2);

    // Usa el realloc para reasignar la memoria
    int *temp = (int*) realloc(ptr, n2 * sizeof(int));
    if (temp == NULL) {
        printf("Error! memory not reallocated.\n");
        free(ptr); // libera la memoria anterior si hay un error
        return 1;
    }
    ptr = temp;

    printf("Addresses of newly allocated memory:\n"); //Muestra las nuevas direcciones
    for (i = 0; i < n2; ++i) {
        printf("p[%d] = %p\n", i, (void*)(ptr + i));
    }

    free(ptr); // libera la memoria

    return 0; //No habia return antes
} //Tampoco cerraba el main/******************************************************
*       # Pontificia Universidad Javeriana #    
*       Autor: Andres Felipe Diaz Torres
*       Fecha: 26 de Agosto del 2025
*       Docente: John Corredor
*       Objetivo: Desafio 5
******************************************************/

//Faltaban las librerias

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, i, n1, n2; //Declarar variables

    printf("Enter size: ");
    scanf("%d", &n1);

    ptr = (int*) malloc(n1 * sizeof(int)); // reservar de memoria

    if (ptr == NULL) { //Si no lo logra
        printf("Error! memory not allocated.\n");
        return 1;
    }

    printf("Addresses of previously allocated memory:\n"); //Muestra las direcciones antes de pedir el nuevo tamaro
    for (i = 0; i < n1; ++i) {
        printf("p[%d] = %p\n", i, (void*)(ptr + i));
    }

    printf("\nEnter the new size: ");
    scanf("%d", &n2);

    // Usa el realloc para reasignar la memoria
    int *temp = (int*) realloc(ptr, n2 * sizeof(int));
    if (temp == NULL) {
        printf("Error! memory not reallocated.\n");
        free(ptr); // libera la memoria anterior si hay un error
        return 1;
    }
    ptr = temp;

    printf("Addresses of newly allocated memory:\n"); //Muestra las nuevas direcciones
    for (i = 0; i < n2; ++i) {
        printf("p[%d] = %p\n", i, (void*)(ptr + i));
    }

    free(ptr); // libera la memoria

    return 0; //No habia return antes
} //Tampoco cerraba el main