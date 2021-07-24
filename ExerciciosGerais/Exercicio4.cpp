#include <stdio.h>

int main(){
	
	int salario, sf, ps;
	
	printf("Insira o salario:\n");
	scanf("%d", &salario);

	ps=(salario*0.25);
	sf = salario+ps;
	printf("O salario final eh: %d", sf);
	
}
