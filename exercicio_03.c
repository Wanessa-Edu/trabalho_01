#include <stdio.h>


int main(){

    char nome[30], meio [30], sobrenome[30];
    
    printf("Qual o seu nome: ");
    scanf("%s", &nome);

    printf("\nQual o seu nome do meio: ");
    scanf("%s", &meio);

    printf("Qual o seu sobrenome: ");
    scanf("%s", &sobrenome);

    printf("Nome completo: %s %s %s", nome, meio, sobrenome);


    return 0;
}