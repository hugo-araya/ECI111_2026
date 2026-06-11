#include <stdio.h>

int main(){
	int numero, suma, cont;
	float media;
	cont = 0;
	suma = 0;
	scanf("%d", &numero);
	while (numero != 0){
		suma = suma + numero;
		cont = cont + 1;
		scanf("%d", &numero);
	}
	media = (float)suma / cont;
	printf("%d , %f\n", suma, media);
	return 0;
}
