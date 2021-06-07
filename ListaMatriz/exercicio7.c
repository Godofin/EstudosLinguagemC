#include<stdio.h>
int main()
{
 int M[3][3],i,j,Qtdpar=0,Qtdimpar=0;

 for(i=0;i<3;i++)        
  for(j=0;j<3;j++)
   {           
    printf("Elemento[%d][%d]= ",i,j);           
    scanf("%d",&M[i][j]);        
   }     
       
  printf("\n  Valores originais da matriz\n");     
  for(i=0;i<3;i++)
   {         
    for(j=0;j<3;j++)           
     printf("%d ",M[i][j]);         
     printf("\n");     
    }        
  for(i=0;i<3;i++)         
  for(j=0;j<3;j++)
  {
     if(M[i][j]%2==0)
      {
        Qtdpar++;
       }else
         {
          Qtdimpar++;
         }
  }                  
   printf("\n Quantidade de elementos par = %d \n",Qtdpar); 
   printf("\n Quantidade de elementos impar = %d \n",Qtdimpar);
    
 return 0; 
}