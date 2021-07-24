#include <stdio.h>
int main()

{
	double sal, imp, novoS, real;
	
	printf("Digite o salario do funcionario\n");
	scanf("%f", &sal);
	
	imp = sal*0.10;
	novoS = (sal-imp)+50;
	printf("O salario do funcionario tem a receber e %f", novoS);
}
