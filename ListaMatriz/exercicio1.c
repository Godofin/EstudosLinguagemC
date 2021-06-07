#include<stdio.h>
int main()
{
    float matriz[2][2], soma=0;
    int i,j;
    printf("\t \n Digite os valores da matriz : \n");
    for(i=0;i<2;i++) 
    for(j=0;j<2;j++)
    {
    scanf("%f",&matriz[i][j]);
    }

    for(i=0;i<2;i++)
    for(j=0;j<2;j++){
        soma=soma+matriz[i][j];
    }
    printf(" Os valores são: \n");
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    {
        printf("%.1f\n",matriz[i][j]);
    }
    printf("A soma é = %.1f\n",soma);
    return 0; 
}