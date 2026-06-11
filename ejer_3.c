#include <stdio.h>

int main(){
	int numero, es_mul_5, es_mul_3;
	int FALSE = 0, TRUE = 1;
	numero = 1;

	while (numero <= 100){
		es_mul_3 = FALSE;
		es_mul_5 = FALSE;
		if (numero%3 == 0){
			es_mul_3 = TRUE;
		}
		if (numero%5 == 0){
			es_mul_5 = TRUE;
		}
		if ((es_mul_3 == TRUE) && (es_mul_5 == TRUE)){
			printf ("fizzbuzz\n");
		}
		else {
			if (es_mul_3 == TRUE){
				printf("fizz\n");
			}
			else{
				if (es_mul_5 == TRUE){
					printf("buzz\n");
				}
				else{
					printf("%d\n",numero);
				}
			}
		}
		numero = numero +1;
	}
	return 0;
}
