#include <stdio.h>

int leer_numero(){
	int numero;
	printf("Número entero positivo: ");
	scanf("%d", &numero);
	return numero;
}

int main(){
	int numero = leer_numero();
	if(numero<0) printf("El número debe ser positivo para poder descender\n"); return 1;//asume número positivo; si no es positivo, no se puede descender hasta el 0
	printf("%d\n", numero);
	while(numero>1){
		numero-=2;
		printf("%d\n", numero);
	}
	if(numero==1) printf("El número introducido es impar\n");
	else printf("El número introducido es par\n");
}
