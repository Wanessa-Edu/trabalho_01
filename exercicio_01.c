#include <stdio.h>



int main(){
    float numero_1, numero_2;


    //  valores aqui
    printf("Digite o primeiro valor inteiro (real): ");
    scanf("%f, numero_1");
    printf("\nDigite um segundo valor de numero inteiro(real): ");
    scanf("%f, numero_2");

    // Calculos e exibe os resultados das funcoes matematicas
    printf("\nResultados:");
    printf("\nAdicao: %2.f", numero_1 + numero_2);
    printf("\nSubtracao: %.2f", numero_1 - numero_2);
    printf("\nMultiplicacao: %.2f", numero_1 * numero_2);

    //Verifica se o divisor é diferente de zero evitar erro
    if (numero_2 != 0) {
        printf("\nDivisao: %.2f", numero_1 / numero_2);
    } else {
        printf("\nDivisao: Nao é possivel dividir por zero!");
    }


return 0;
}
