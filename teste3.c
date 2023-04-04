#include <stdio.h>

void main(void)
{
	int num, cont;

	cont = 0;
	while (cont < 5) {
		printf("digite um numero:");
		scanf("%d", &num);
		if ((num % 2) == 0) {
			printf("par\n");
		} else {
			printf("impar\n");
		}
		cont = cont + 1;
	}
}
