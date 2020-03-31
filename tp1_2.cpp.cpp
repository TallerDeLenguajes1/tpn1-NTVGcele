#include <stdio.h>
#include <stdlib.h>

int cuadrado(int n); //PUNTO A
void mostrarCuadrado(int n);//PUNTO B
void invertir(int a);// PUNTO D
void ordenar(int a);//PUNTO E

int main(){
	// ---------------PUNTO A-----------------
	int num, cuad, num2;
	printf("Ingrese el numero que desea obtener su cuadrado: \n");
	scanf("%d", &num);

	printf("El contenido de la variable es de: %d\n", num);//PUNTO C 
	printf("La dirrecion de la variable es de: %d\n\n", &num);//PUNTO C

	cuad = cuadrado(num);
	printf("El numero %d al cuadrado  es: %d\n\n\n", num, cuad);

	//----------------PUNTO B------------------
	printf("Ingrese el numero que desea obtener su cuadrado: \n");
    scanf("%d", &num2);

    printf("El contenido de la variable es de: %d\n", num2);//PUNTO C
	printf("La dirrecion de la variable es de: %d\n\n", &num2);//PUNTO C

    mostrarCuadrado(num2);

    //----------------PUNTO D------------------
    int a;
    printf("Ingrese un numero para invertir: \n\n");
    scanf("%d", &a);
    invertir(a);

    //----------------PUNTO E------------------
    int numO;
    printf("ingrese in numero el q desee ordenar de menor a mayor: \n");
    scanf("%d", &numO);
    ordenar(numO);
}

int cuadrado(int n){
	int total;
	total = n * n;
	return total;
}

void mostrarCuadrado(int m){
	int total;
	total = m * m;
	printf("El numero %d al cuadrado  es: %d\n\n\n", m, total);
}

void invertir(int a){
	int invert, resto, cosc;
	resto = (a % 10);
	cosc = (a / 10);
	invert = (resto * 10) + cosc;
	printf("El mumero %d invertido es: %d\n", a, invert);
}

void ordenar(int a){
	int numOrdenado, resto, cosc;
	resto = (a % 10);
	cosc = (a / 10);
	if(resto <= cosc){
		numOrdenado = (resto * 10) + cosc;
	}
	else{
		numOrdenado = (cosc * 10) +resto;
	}
	printf("El numero %d ordenado es: %d\n", a, numOrdenado);
}