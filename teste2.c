#include <stdio.h>

void main(void)
{
	int n1, n2;

	n1 = 0;
	while ( 1 ) {
		printf("digite um numero:");
		scanf("%d", &n2);
		if (n2 > n1) {
			n1 = n2;
		}
		if (n2 == -1) {
			break;
		}
	}
	printf("o maior numero digitado foi: %d\n", n1);
}
