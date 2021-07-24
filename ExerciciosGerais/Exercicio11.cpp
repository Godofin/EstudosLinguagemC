// Exercício 11
#include <stdio.h>

int main()
{
   int n;
   float c1, c2, c3, c4;

   printf("Insira um numero inteiro: ");
   scanf("%d", &n);

   c1 = n*n;
   printf("Esse eh o calculo da potencia de 2: %.2f\n", c1);

   c2 = n*n*n;
   printf("Esse eh o calculo da potencia de 3: %.2f\n", c2);

   c3 = c1/n;
   printf("Esse eh o calculo da raiz por 2: %.2f\n", c3);

   c4 = c2/n;
   printf("Esse eh o calculo da raiz por 3: %.2f\n", c4);
}
