#include <stdio.h>

int main() {
    // Dados da Carta 1 - Natal (RN)
    char estado1[] = "RN";
    char nomeCidade1[100] = "Natal";
    int populacao1 = 1350000;
    float area1 = 170.4;
    float pib1 = 10.23;
    int pontosTuristicos1 = 20;

    // Dados da Carta 2 - Rio de Janeiro (RJ)
    char estado2[] = "RJ";
    char nomeCidade2[100] = "Rio de Janeiro";
    int populacao2 = 6747815;
    float area2 = 1255.3;
    float pib2 = 300.5;
    int pontosTuristicos2 = 50;

    // Cálculo da densidade populacional
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    int opcao;

    // Menu interativo
    printf("=== SUPER TRUNFO - COMPARAÇÃO DE CIDADES ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (MENOR vence)\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s (%s) e %s (%s)...\n\n", nomeCidade1, estado1, nomeCidade2, estado2);

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d\n", nomeCidade1, populacao1);
            printf("%s: %d\n", nomeCidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("\nResultado: %s venceu!\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("\nResultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área (km²)\n");
            printf("%s: %.2f\n", nomeCidade1, area1);
            printf("%s: %.2f\n", nomeCidade2, area2);

            if (area1 > area2) {
                printf("\nResultado: %s venceu!\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("\nResultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB (em bilhões de reais)\n");
            printf("%s: %.2f\n", nomeCidade1, pib1);
            printf("%s: %.2f\n", nomeCidade2, pib2);

            if (pib1 > pib2) {
                printf("\nResultado: %s venceu!\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("\nResultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d\n", nomeCidade2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("\nResultado: %s venceu!\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("\nResultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica (hab/km²)\n");
            printf("%s: %.2f\n", nomeCidade1, densidade1);
            printf("%s: %.2f\n", nomeCidade2, densidade2);

            if (densidade1 < densidade2) {
                printf("\nResultado: %s venceu!\n", nomeCidade1);
            } else if (densidade2 < densidade1) {
                printf("\nResultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        default:
            printf("\nOpção inválida. Escolha entre 1 e 5.\n");
    }

    return 0;
}
