#include <stdio.h>

int main(){
	
	int n1,n2,n3,media,soma;
	
	printf("Insira Nota1:\n");
	scanf("%d", &n1);
	printf("Insira nota2:\n");
	scanf("%d", &n2);
	printf("Insira nota 3:\n");
	scanf("%d", &n3);

	soma = n1+n2+n3;
	media = soma/3;
	printf("A nota final eh: %d", media);
	
}
