/*Crie um programa em C que peC'a ao usuC!rio o saldo de uma aplicaC'C#o e calcule o
novo saldo apC3s um reajuste de 1%. Mostre o resultado formatado com duas casas decimais.*/

#include <stdio.h>

int main() {
    float saldo, novoSaldo;

    printf("Digite o saldo da aplicação: ");
    scanf("%f", &saldo);

    novoSaldo = saldo * 1.01; 

    printf("O novo saldo, com reajuste de 1%%, é: %.2f\n", novoSaldo);

    return 0;
}
