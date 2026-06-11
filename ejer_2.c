#include <stdio.h>

int main(){
	int numero, es_mul, limite, marca;
	int falso = 0, verdadero = 1, contador = 0;
	numero = 1;
	printf("Indique el numero marca: ");
	scanf("%d", &marca);
	printf("Indique el numero final: ");
	scanf("%d", &limite);
	while (numero <= limite){
		es_mul = falso;
		if (numero%marca == falso){
			es_mul = verdadero;
			contador = contador + 1;
		}
		if (es_mul == verdadero){
			printf("fizz\n");
		}
		else {
			printf("%d\n",numero);
		}
		numero = numero + 1;
	}
	printf("La cantidad de multiplos de %d es: %d\n", marca, contador);
	return 0;
}
