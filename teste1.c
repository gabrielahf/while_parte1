#include <stdio.h>

int main()
{
	int i;
	int cod;

	i = 0;
//"enquanto" i for menor que 5, devera realizar os seguintes comandos
	while(i < 5) {
//essa expressao significa i + 1, mais espaco na memoria	
		i++;

		printf("Opção 1\n");
		printf("Opção 2\n");
		printf("Opção 3\n");
		printf("Opção 4\n");
		printf("Opção 5\n");
		printf("Opção 6\n");

		printf("\nEscolha uma opção do menu:\n");
//fluxo bloqueado, armazena a variavel mas nao imprime
		scanf("%d", &cod);

		switch(cod) {
			case 1:
				printf("Opção 1\n");
				break;
			case 2:
				printf("Opção 2\n");
				break;		
			case 3:
				printf("Opção 3\n");
				break;
			case 4:
				printf("Opção 4\n");
				break;			
			case 5:
				printf("Opção 5\n");
				break;
			case 6:
				printf("Opção 6\n");
				break;
			default:
				printf("Opção inválida\n");
		}
        printf("\n\n");
	}
    printf("FIM DO MENU\n");
    
    return 0;
}