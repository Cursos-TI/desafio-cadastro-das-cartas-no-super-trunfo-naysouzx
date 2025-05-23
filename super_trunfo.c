#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Novato: Cadastro de Cartas

int main() {
    // Variáveis para a Carta 1 (Fortaleza)
    char estado1 = 'C';
    char codigo1[] = "C02";
    char nomeCidade1[] = "Fortaleza";
    int populacao1 = 2686612;
    float area1 = 314.93;
    float pib1 = 67.45;
    int pontosTuristicos1 = 35;

    // Variáveis para a Carta 2 (Recife)
    char estado2 = 'D';
    char codigo2[] = "D03";
    char nomeCidade2[] = "Recife";
    int populacao2 = 1653461;
    float area2 = 218.44;
    float pib2 = 56.78;
    int pontosTuristicos2 = 28;

    // Exibição das cartas
    printf("\n========================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
