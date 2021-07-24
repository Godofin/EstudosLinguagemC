#include <stdio.h>

main () {
     float salario, aumento, salarioFinal;
     
     printf ("Informe o seu salario: ");
     scanf ("%f", &salario);
     
     printf ("Informe o seu aumento, em porcentagem: ");
     scanf ("%f", &aumento);
     
     salarioFinal=(salario*(aumento/100))+salario;
     
     printf ("O salario final acrescido do aumento eh: %.2f", salarioFinal);
}
