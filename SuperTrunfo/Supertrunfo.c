#include <stdio.h>

int main(){

    // Dados Carta 1
    char Estado1;
    char codigo1[4];
    char cidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // Dados Carta 2
    char Estado2;
    char codigo2[4];
    char cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    

    // Entrada de dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &Estado1);

    printf("Código da Carta (ex: A01, B03): ");
    scanf(" %3s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);


    // Entrada de dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &Estado2);

    printf("Código da Carta (ex: A01, B03): ");
    scanf(" %3s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Impressão das informações - Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    // Impressão das informações - Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;

}
