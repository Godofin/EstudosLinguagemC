//Fibonacci - 1,1,2,3,5,8,13,21,34
//c é a soma
//A é o anterior
//B é o próximo

#include "stdio.h"
 
// A função main() é obrigatória em todo programa C.
void main()
{
   int a, b, c, i;
 
  a = 0;
  b = 1;
  i = 0;
  printf("Fibonacci:\n");
 
  while(i<8)
  {
	  	//O número tem que ser a soma do anterior e do próximo
	    c = a + b;
	    // B vira o número anterior
	    a = b;
	    //O próximo número vira a soma
	    b = c;
	 
	    // Imprimo o número na tela.
	    printf("%d\n", c);
	    i++;	    
  }
}
