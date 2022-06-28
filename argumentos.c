/*
 ============================================================================
 Name        : l.c
 Author      : SkrilSPoWeR
 Version     : v 1.0
 Copyright   : Motril (España) - 2022
 Description : Ejemplo de paso de parametros por consola en lenguaje C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

	// Si no hubiese parámetros, lanzaría por pantalla
	if (argc < 2) {
		printf("\nNo has escrito ningún parámetro.\n");

	}else {
		// Imprime por pantalla la cantidad de argumentos que tiene
		printf("\nLa instuccion escrita, tiene %i parámetros.\n\n", argc-1);// Quitamos 1 para que no cuente la instruccion
		// Imprime por pantalla los argumentos
		printf("Los argumento escritos son: \n");
		for (int i = 1; i < argc; i++) {
			printf("   - Parámetro %i: %s\n", i, argv[i]);
		}
	}


}

