#include <stdio.h>

int main() {
    char estado, estado2;
    char codigo[20], codigo2[20];
    char nome[20], nome2[20];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int turismo, turismo2;
    
    printf("Carta1\n");

    printf("digite o estado: ");
    scanf("%c", &estado);
    printf("o estado é: %c\n", estado);

    printf("digite o codigo: ");
    scanf("%s", codigo);
    printf("o codigo é: %s\n", codigo);

    printf("nome da cidade: ");
    scanf("%s", nome);
    printf("o nome é: %s\n", nome);

    printf("digite a populacao: ");
    scanf("%d", &populacao);
    printf("a populacao é: %d\n", populacao);

    printf("digite a area: ");
    scanf("%f", &area);
    printf("a area é: %f\n", area);

    printf("digite o Pib: ");
    scanf("%f", &pib);
    printf("o Pib é: %f\n", pib);

    printf("Quantidade de pontos turisticos na cidade: ");
    scanf("%d", &turismo);
    printf("a quantidade é: %d\n", turismo);

    printf("Carta2\n");

    printf("digite o estado: ");
    scanf(" %c", &estado2);
    printf("o estado é: %c\n", estado2);

    printf("digite o codigo: ");
    scanf(" %s", codigo2);
    printf("o codigo é: %s\n", codigo2);
    
    printf("nome da cidade: ");
    scanf("%s", nome2);
    printf("o nome é: %s\n", nome2);

    printf(" digite a populacao: ");
    scanf("%d", &populacao2);
    printf("a populacao é: %d\n", populacao2);

    printf("digite a area: ");
    scanf("%f", &area2);
    printf("a area é: %f\n", area2);
    
    printf("digite o Pib: ");
    scanf("%f", &pib2);
    printf("o Pib é: %f\n", pib2);

    printf("Quantidade de pontos turisticos na cidade: ");
    scanf("%d", &turismo2);
    printf("A quantidade é: %d", turismo2);



    return 0;
}
