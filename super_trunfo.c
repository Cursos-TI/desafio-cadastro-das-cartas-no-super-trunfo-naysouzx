#include <stdio.h>

int main() {
    // Carta 1 - Fortaleza
    char estado1 = 'C';
    char codigo1[] = "C02";
    char nomeCidade1[] = "Fortaleza";
    int populacao1 = 1000000;  // População simplificada
    float area1 = 500.0;       // Área fictícia
    double pib1 = 10.0;        // PIB fictício em bilhões
    int pontosTuristicos1 = 15;

    // Carta 2 - Recife
    char estado2 = 'D';
    char codigo2[] = "D03";
    char nomeCidade2[] = "Recife";
    int populacao2 = 2000000;  // População simplificada
    float area2 = 800.0;       // Área fictícia
    double pib2 = 40.0;        // PIB fictício em bilhões
    int pontosTuristicos2 = 12;

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    double pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    double pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // Exibição - Carta 1
    printf("Carta 1:\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2lf reais\n\n", pibPerCapita1);

    // Exibição - Carta 2
    printf("Carta 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2lf reais\n", pibPerCapita2);

    return 0;
}
