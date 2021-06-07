#include<stdio.h>
int main()
{
 int M[3][3],M2[3][3],soma[3][3];
 int i,j;

 printf(" \n Informe os elementos da Matriz M \n\n");
 for(i=0;i<3;i++)        
 for(j=0;j<3;j++)
   {           
     printf("Elemento[%d][%d]= ",i,j);           
     scanf("%d",&M[i][j]);        
   }     
  printf("\n  Valores da matriz M \n");     
  for(i=0;i<3;i++)
    {         
      for(j=0;j<3;j++)           
        printf("%d ",M[i][j]);         
        printf("\n");     
  }     
  printf("\n\n Informe os elementos da Matriz M2 \n\n");   
  
  for(i=0;i<3;i++)        
  for(j=0;j<3;j++)
    {           
      printf("Elemento[%d][%d]= ",i,j);           
      scanf("%d",&M2[i][j]);        
    }     
  printf("\n  Valores da matriz M2 \n");     
  for(i=0;i<3;i++)
    {         
      for(j=0;j<3;j++)           
        printf("%d ",M2[i][j]);         
        printf("\n");     
    }     
  for(i=0;i<3;i++)      
  for(j=0;j<3;j++)
    {
      soma[i][j]=M[i][j]+M2[i][j];                     
    } 
  printf("\n Matriz resultante da soma\n\n  ");
  
  for(i=0;i<3;i++)
    {     
      for(j=0;j<3;j++)
      printf("\t %d ",soma[i][j]);
      printf("\n");                  
  }  
 return 0;         
}