#include<stdio.h>
#include<stdlib.h>
#include<math.h> 
#include<conio.h>
#include<string.h>
int main()
{
 int z, vet[11], t=10;
 for(z=0; z<11; z++)
 {
 vet[z]= t;
 t++;
 }
 printf("\n\n");
 for(z=1; z<11; z=z+2)
 printf("%d\t",vet[z]);
 printf("\n");
 system("pause");
 return(0);
}