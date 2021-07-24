#include <stdio.h>

int main ( )

{

	float n1, n2, n3, mediaP;

	float peso1, peso2, peso3, somaP;

	printf("Digite a primeira nota\n");
	scanf("%f", &n1);

	printf("Digite o peso da primeira nota\n");
	scanf("%f", &peso1);

	printf("Digite a segunda nota\n");
	scanf("%f", &n2);

	printf("Digite o peso da segunda nota\n");
	scanf("%f", &peso2);

	printf("Digite a terceira nota\n");
	scanf("%f", &n3);

	printf("Digite o peso da primeira nota\n");
	scanf("%f", &peso3);
	
	somaP =(peso1+peso2+peso3);

	mediaP=((n1*peso1)+(n2*peso2)+(n3*peso3))/somaP;

	printf("Media ponderada: %.2f", mediaP);

}
