#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*Esta variable de tipo entero guarda la altura del triangulo*/
	int altura = 0;
	
	/*Esta variable de tipo entero guarad la base del triangulo*/
	int base = 1;
	
	/*Estas variables de tipo entero inicializan contadores*/
	int contador;
	int contadorDos;
	
	printf("Ingresa la altura del trialgulo: ");
	scanf("%i", &altura);
	
	for(contador=1; contador<=altura; contador++){
		for(contadorDos=1; contadorDos<=base; contadorDos++){
			printf("*");
		}
		printf("\n");
		base =base++;
	}
	
	return 0;
}
