#include<stdio.h> 
int main()

 {    
  int i, j, m[3][3];
       
/*vamos digitar os elementos para que sejam salvos na memória*/    
 for(i=0;i<3;i++)        
  for(j=0;j<3;j++)
    {           
      printf("Elemento[%d][%d]= ",i,j);           
      scanf("%d",&m[i][j]);         
    } 
    
/*O trecho abaixo, vai exibir os valores originais que digitamos*/  
  printf("\n  Valores originais da matriz\n");     
  for(i=0;i<3;i++)
   {         
     for(j=0;j<3;j++)             
       printf("%d ",m[i][j]);         
       printf("\n");     
   }     
  /*Abaixo, vamos multiplicar os valores da matriz por 5 */    
  for(i=0;i<3;i++)         
  for(j=0;j<3;j++)
    {
      m[i][j]=m[i][j]*5;
    }             
      
   /*Agora, vamos exibir os valores após a multiplicação */     
   printf("\n Valores apos a multiplicacao por 5 \n");     
   for(i=0;i<3;i++)
   {         
      for(j=0;j<3;j++)             
        printf("%d ",m[i][j]);         
        printf("\n");     
    }       
  return 0; 
}