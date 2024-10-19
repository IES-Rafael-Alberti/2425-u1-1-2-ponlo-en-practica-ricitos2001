// This code is a translation from Python to C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* crear_saludo(char* nombre) {
    // Allocate memory for the saludo string
    char* saludo = (char*)malloc(100 * sizeof(char)); // Assuming the length of the greeting will not exceed 100 characters
    snprintf(saludo, 100, "hola %s este programa esta hecho en el lenguaje de programacion: python", nombre);
    return saludo;
}

int main() {
    char nombre[50];
    printf("¿como te llamas? ");
    fgets(nombre, sizeof(nombre), stdin);
    // Remove newline character from fgets
    nombre[strcmp(nombre, "\n")] = 0;
    
    char* saludo = crear_saludo(nombre);
    printf("%s\n", saludo);
    
    // Free allocated memory
    free(saludo);
    return 0;
}