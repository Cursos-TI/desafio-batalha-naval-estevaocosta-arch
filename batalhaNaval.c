#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
 // ==============================
    // PARTE 1 - BATALHA NAVAL
    // ==============================

    // Criando um tabuleiro 5x5 (matriz bidimensional)
    int tabuleiro[5][5] = {0}; // inicializa todos os valores com 0

    // Posicionando um navio vertical na coluna 1 (nas linhas 0,1,2)
    tabuleiro[0][1] = 1; // primeira parte do navio
    tabuleiro[1][1] = 1; // segunda parte
    tabuleiro[2][1] = 1; // terceira parte

    // Posicionando um navio horizontal na linha 4 (nas colunas 2,3,4)
    tabuleiro[4][2] = 2; // primeira parte do navio
    tabuleiro[4][3] = 2; // segunda parte
    tabuleiro[4][4] = 2; // terceira parte

    // Exibindo no console as posições ocupadas
    printf("=== Batalha Naval ===\n");

    printf("Navio Vertical:\n");
    printf("(0,1)\n");
    printf("(1,1)\n");
    printf("(2,1)\n");

    printf("\nNavio Horizontal:\n");
    printf("(4,2)\n");
    printf("(4,3)\n");
    printf("(4,4)\n");

    // ==============================
    // PARTE 2 - SUPER TRUNFO
    // ==============================

    // Variáveis da Carta 1
    char estado1;          // uma letra de A a H
    char codigo1[4];       // ex: A01 (string de 3 caracteres + '\0')
    char cidade1[50];      // nome da cidade (string com até 49 letras)
    int populacao1;        // número inteiro
    float area1;           // área em km² (número com casas decimais)
    float pib1;            // PIB em bilhões de reais
    int pontos1;           // número de pontos turísticos

    // Variáveis da Carta 2 (mesma estrutura da carta 1)
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontos2;

    printf("\n\n=== Cadastro de Cartas - Super Trunfo ===\n");

    // Cadastro da Carta 1
    printf("\n--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);             // lê 1 caractere
    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);               // lê string (sem espaços)
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);          // lê string até a quebra de linha
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cadastro da Carta 2
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Exibição final das cartas cadastradas
    printf("\n\n=== Cartas Cadastradas ===\n");

    // Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);

    // Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
