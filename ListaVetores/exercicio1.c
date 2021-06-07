#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int x, vetor[8], numero, achado=0;
for(int x=0;x<8;x++) {
 printf("\n[%d] Digite um numero: ",x);
 scanf("%d",&vetor[x]);
 }
 printf("\n\n");
 printf("Digite um valor a ser pesquisado: ");
 scanf("%d",&numero);
 for(int x=0;x<8;x++)

 if(vetor[x]==numero)
 {
 printf("\n O numero %d esta na posicao %d: ",numero,x);
 achado=1;
 }
 if(achado!=1)
 printf("\n Este numero nao existe");

 printf("\n\n");
 system("pause");
 return(0);

} 