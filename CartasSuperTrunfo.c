#include <stdio.h>

typedef struct {
    char estado;
    char codigo[5];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

void exibirCarta(Carta carta, int numero) {
    printf("Carta %d:\n", numero);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n\n", carta.pontosTuristicos);
}

void limparLinha(void) {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) { }
}

int main() {
    Carta carta1, carta2;

    // Carta 1
    printf("Insira os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);
    limparLinha();

    printf("Código da Carta (ex: A01): ");
    scanf(" %4s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", carta1.nomeCidade);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);
    limparLinha();

    printf("Código da Carta (ex: A01): ");
    scanf(" %4s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", carta2.nomeCidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibir
    printf("\n");
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    return 0;
}
