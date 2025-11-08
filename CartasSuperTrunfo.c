#include <string.h>


// - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf 

struct Carta {
    char estado[32];               // identifica o estado
    char codigo[16];              // Código da carta (ex.: A01, B03)
    char cidade[64];             // Nome da cidade
    int populacao;               // Número de habitantes
    float area;                  // Área em km²
    float pib;                   // PIB da cidade em reais
    int pontosTuristicos;        // Quantidade de pontos turísticos
};
 
      
int main () {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados
    struct Carta carta1;  // Variável para armazenar a primeira carta
    struct Carta carta2;  // Variável para armazenar a segunda carta

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado:");
    scanf("%31[^\n]", &carta1.estado);
    
    printf("Codigo da carta: ");
    scanf("%c", &carta1.codigo);
    
    printf("Nome da Cidade: ");
    scanf("%63[^\n]", &carta1.cidade);

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (em km2): ");
    scanf("%f", &carta1.area);

    printf("PIB (em reais): ");
    scanf("%f", &carta1.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %31[^\n]", &carta2.estado);

    printf("Codigo (ex.: B02): ");
    scanf("%s", &carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %63[^\n]", &carta2.cidade);

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (em km2): ");
    scanf("%f", &carta2.area);

    printf("PIB (em reais): ");
    scanf("%f", &carta2.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibição dos dados cadastrados
    printf("\n=== Dados das Cartas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: %.2f de reais\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: %.2f de reais\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);

  // Área para exibição dos dados da cidade

return 0;
} 