#include <stdio.h>
#include <stdlib.h>


int main(){
	int m, *p;
	m = 10;
	p = &m;
	
    printf("Este es el contenido de un puntero: %d \n", *p);
    printf("La direccion almacenada del puntero es: %d\n", p);
    printf("La direccion de memoria de la variable es: %d\n", &m);
    printf("La direccion de memoria del puntero es: %d\n", &p);
    printf("el tamaño de memoria utilizado por esa variable %d\n", sizeof(m));

}