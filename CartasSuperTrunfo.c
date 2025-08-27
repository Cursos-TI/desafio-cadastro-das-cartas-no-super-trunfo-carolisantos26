#include <stdio.h>

int main(void) {
    // Carta 1 - Rio de Janeiro
    char codigo1[4] = "A01";
    char nome1[30] = "Rio_de_Janeiro";
    int pop1 = 6748000;          // População aproximada
    float area1 = 1182.30;       // km²
    float pib1 = 407.0;          // PIB em bilhões (aproximado)
    int pts1 = 20;               // número estimado de pontos turísticos

    // Carta 2 - São Paulo
    char codigo2[4] = "B02";
    char nome2[30] = "Sao_Paulo";
    int pop2 = 12330000;         // População aproximada
    float area2 = 1521.11;       // km²
    float pib2 = 714.0;          // PIB em bilhões (aproximado)
    int pts2 = 30;               // número estimado de pontos turísticos

    // Exibição dos dados
    printf("\n=== Dados Cadastrados ===\n");
    printf("Carta %s - %s\n", codigo1, nome1);
    printf("Populacao: %d\n", pop1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turisticos: %d\n\n", pts1);

    printf("Carta %s - %s\n", codigo2, nome2);
    printf("Populacao: %d\n", pop2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turisticos: %d\n", pts2);

    return 0;
}

