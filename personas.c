#include <stdio.h>

#define NUMERO 50

struct persona{
	char sexo;
	short edad;	//'h' para hombre, 'm' para mujer
};

void leer_personas(struct persona personas[NUMERO]){
	for(short i=0; i<NUMERO; i++){
		personas[i].edad = i+1;
		if(i>20) personas[i].sexo = 'm';
		else personas[i].sexo = 'h';
	}
}

int main(){
	struct persona personas[NUMERO];
	leer_personas(personas);
	short mayores=0, mayores_hombres=0, menores_mujeres=0, mujeres=0;
	for(short i=0; i<NUMERO; i++){
		if(personas[i].edad>17){
			mayores++;
			if(personas[i].sexo=='h') mayores_hombres++;
		}else if(personas[i].sexo=='m') menores_mujeres++;
		if(personas[i].sexo=='m') mujeres++;
	}
	short menores = NUMERO-mayores;
	printf("a. %d\n", mayores);
	printf("b. %d\n", menores);
	printf("c. %d\n", mayores_hombres);
	printf("d. %d\n", menores_mujeres);
	printf("e. %.0f%\n", (float)mayores/NUMERO*100);
	printf("f. %.0f%\n", (float)mujeres/NUMERO*100);
}
