#include<stdio.h>
int main()
{
 int mat[5][5],i,j;
 int valor_par=+1,valor_impar=-1;

   for(i=0;i<5;i++)
    for(j=0;j<5;j++)
      {
        printf("Digite o valor de [%d][%d] = ",i,j);
        scanf("%d", &mat[i][j]);
           if( mat[i][j]%2==0 )
           {
             mat[i][j]=valor_par;
           }else
             mat[i][j]=valor_impar;
       } 
  
 printf("\n valores depois da substituicao \n\n");

  for(i=0;i<5;i++)
  for(j=0;j<5;j++)
   {
     printf("mat[%d][%d]= %d",i,j,mat[i][j]);
     printf("\n");
   } 
 return 0; 
}
