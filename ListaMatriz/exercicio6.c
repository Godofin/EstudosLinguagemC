#include<stdio.h>
int main()
{
 int matriz[3][3],i,j,soma_se=0;

 for(i=0;i<3;i++)        
  for(j=0;j<3;j++)
  {           
    printf("Elemento[%d][%d]= ",i,j);           
    scanf("%d",&matriz[i][j]);        
  }     

       
  printf("\n  Valores originais da matriz\n");     
  for(i=0;i<3;i++)
  {         
    for(j=0;j<3;j++)           
    printf("%d ",matriz[i][j]);         
    printf("\n");     
  }
  for(i=0;i<3;i++)         
  for(j=0;j<3;j++)
  {
    if(matriz[i][j]%2==0)
     {
      soma_se=soma_se+matriz[i][j];
     }
  }                 
   printf("\n A soma dos elementos par =%d \n",soma_se);
     
 return 0; 
}