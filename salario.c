#include <stdio.h>

int leer_horastrabajadas(){
	int numero;
	printf("Número de horas trabajadas: ");
	scanf("%d", &numero);
	return numero;
}

float leer_tarifa(){
	float numero;
	printf("Tarifa: ");
	scanf("%f", &numero);
	return numero;
}

int main(){
	//ambos inputs se asumen positivos
	int horastrabajadas = leer_horastrabajadas();
	float tarifa = leer_tarifa();

	float sueldo = 0;
	sueldo += horastrabajadas*tarifa;
	if(horastrabajadas>40) sueldo+= 0.5*tarifa*(horastrabajadas-40);
	printf("El sueldo es de %.2f€\n", sueldo);
}
