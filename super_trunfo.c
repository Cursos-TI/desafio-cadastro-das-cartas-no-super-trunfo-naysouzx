#include <stdio.h> // Biblioteca padrão de entrada e saída

// Desafio Super Trunfo - Nível Novato
// Objetivo: cadastrar duas cartas com dados fictícios de cidades
// Desenvolvido por Nayra

int main() {
    // ------------------------------
    // Declaração de variáveis da carta 1 (Fortaleza)
    // ------------------------------
    char estado1 = 'C';                      // Letra do estado fictício (de A a H)
    char codigo1[] = "C02";                  // Código da carta: estado + número
    char nomeCidade1[] = "Fortaleza";        // Nome da cidade
    int populacao1 = 2686612;                // População fictícia
    float area1 = 313.14;                    // Área da cidade em km²
    float pib1 = 67.5;                       // PIB da cidade em bilhões de reais
    int pontosTuristicos1 = 15;              // Número de pontos turísticos

    // ------------------------------
    // Declaração de variáveis da carta 2 (Recife)
    // ------------------------------
    char estado2 = 'D';                      // Estado fictício da segunda cidade
    char codigo2[] = "D03";                  // Código da carta 2
    char nomeCidade2[] = "Recife";           // Nome da cidade
    int populacao2 = 1653461;                // População fictícia
    float area2 = 218.84;                    // Área da cidade
    float pib2 = 55.3;                       // PIB da cidade
    int pontosTuristicos2 = 12;              // Quantidade de pontos turísticos

    // ------------------------------
    // Exibição dos dados da Carta 1
    // ------------------------------
    printf("Carta 1:\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n"); // Linha em branco para separar as cartas

    // ------------------------------
    // Exibição dos dados da Carta 2
    // ------------------------------
    printf("Carta 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0; // Finaliza o programa
}
