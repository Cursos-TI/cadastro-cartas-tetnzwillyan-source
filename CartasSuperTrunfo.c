#include <stdio.h>
#include <string.h>

// Estrutura representando uma carta de cidade
struct Carta {
    char estado[32];         // Estado
    char codigo[16];         // Código da carta (ex.: A01, B03)
    char cidade[64];         // Nome da cidade
    int populacao;           // Número de habitantes
    float area;              // Área em km²
    float pib;               // PIB da cidade em reais
    int pontosTuristicos;    // Quantidade de pontos turísticos
    float densidade;         // Densidade populacional (hab/km²)
    float pibPerCapita;      // PIB per capita
};

int main() {
    struct Carta carta1, carta2;

    // --- Cadastro da Carta 1 ---
    printf("\n=== Cadastro da Carta 1 ===\n");

    printf("Estado: ");
    scanf(" %31[^\n]", carta1.estado);

    printf("Codigo da carta: ");
    scanf(" %15s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %63[^\n]", carta1.cidade);

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (em km2): ");
    scanf("%f", &carta1.area);

    printf("PIB (em reais): ");
    scanf("%f", &carta1.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // --- Cálculos da Carta 1 ---
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;


    // --- Cadastro da Carta 2 ---
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado: ");
    scanf(" %31[^\n]", carta2.estado);

    printf("Codigo da carta: ");
    scanf(" %15s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %63[^\n]", carta2.cidade);

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (em km2): ");
    scanf("%f", &carta2.area);

    printf("PIB (em reais): ");
    scanf("%f", &carta2.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // --- Cálculos da Carta 2 ---
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;


    // --- Exibição das Cartas ---
    printf("\n=== Dados das Cartas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: %.2f reais\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km2\n", carta1.densidade);
    printf("PIB per Capita: %.2f reais\n", carta1.pibPerCapita);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: %.2f reais\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km2\n", carta2.densidade);
    printf("PIB per Capita: %.2f reais\n", carta2.pibPerCapita);

    return 0;
