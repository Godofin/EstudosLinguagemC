//Fibonacci - 1,1,2,3,5,8,13,21,34
//c � a soma
//A � o anterior
//B � o pr�ximo

#include "stdio.h"
 
// A fun��o main() � obrigat�ria em todo programa C.
void main()
{
   int a, b, c, i;
 
  a = 0;
  b = 1;
  i = 0;
  printf("Fibonacci:\n");
 
  while(i<8)
  {
	  	//O n�mero tem que ser a soma do anterior e do pr�ximo
	    c = a + b;
	    // B vira o n�mero anterior
	    a = b;
	    //O pr�ximo n�mero vira a soma
	    b = c;
	 
	    // Imprimo o n�mero na tela.
	    printf("%d\n", c);
	    i++;	    
  }
}
