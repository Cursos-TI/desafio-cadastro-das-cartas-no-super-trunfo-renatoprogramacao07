#include <stdio.h>

int main() {
    char estado, estado2;
    char codigo[20], codigo2[20];
    char nome[20], nome2[20];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int turismo, turismo2;
    float densidade,densidade2,pibpercapita, pibpercapita2;

    
    printf("Carta1\n");

    printf("Digite o estado: ");
    scanf("%c", &estado);
    printf("O estado é: %c\n", estado);

    printf("Digite o codigo: ");
    scanf("%s", codigo);
    printf("O codigo é: %s\n", codigo);

    printf("Nome da cidade: ");
    scanf("%s", nome);
    printf("O nome é: %s\n", nome);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);
    printf("A populacao é: %d\n", populacao);

    printf("Digite a area: ");
    scanf("%f", &area);
    printf("A area é: %f\n", area);

    printf("Digite o Pib: ");
    scanf("%f", &pib);
    printf("O Pib é: %f\n", pib);

    printf("Quantidade de pontos turisticos na cidade: ");
    scanf("%d", &turismo);
    printf("A quantidade é: %d\n", turismo);

    densidade = populacao / area;
    printf("A densidade populacional é: %f\n", densidade);

    pibpercapita = pib / populacao;
    printf("O Pib per capita é: %f\n", pibpercapita);


    printf("Carta2\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado2);
    printf("O estado é: %c\n", estado2);

    printf("Digite o codigo: ");
    scanf(" %s", codigo2);
    printf("O codigo é: %s\n", codigo2);
    
    printf("Nome da cidade: ");
    scanf("%s", nome2);
    printf("O nome é: %s\n", nome2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("A populacao é: %d\n", populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("A area é: %f\n", area2);
    
    printf("Digite o Pib: ");
    scanf("%f", &pib2);
    printf("O Pib é: %f\n", pib2);

    printf("Quantidade de pontos turisticos na cidade: ");
    scanf("%d", &turismo2);
    printf("A quantidade é: %d", turismo2);

    densidade2 = populacao2 / area2;
    printf("A densidade populacional é: %f\n", densidade2);
 
    pibpercapita2 = populacao2 / pib2;
    printf("O PIB per capita é: %f\n", pibpercapita2);







    return 0;
}
