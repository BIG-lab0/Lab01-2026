#include <stdio.h> 

int main(){

    int salario_minimo;
    int salario_bruto;
    int salario_final;

    printf("Digite o valor do seu salario minimo\n"); 
    scanf("%d", &salario_minimo);

    printf("Digite o valor do seu salario bruto\n");  
    scanf("%d", &salario_bruto);

    salario_final = salario_bruto / salario_minimo;

    printf("Quantidade de salarios minimos: %d\n", salario_final);

    return 0;
}