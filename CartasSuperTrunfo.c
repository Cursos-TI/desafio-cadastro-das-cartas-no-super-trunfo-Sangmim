#include <stdio.h>

#define MAX_ESTADOS 8
#define CIDADES_POR_ESTADO 4
#define MAX_CIDADES (MAX_ESTADOS * CIDADES_POR_ESTADO) // 8 estados * 4 cidades cada

// Estrutura para armazenar as propriedades da cidade
typedef struct {
    char codigo[4]; // Código ex: A01, B02
    int populacao;
    float area;
    double pib;
    int pontos_turisticos;
} Cidade;

int main() {
    Cidade cidades[MAX_CIDADES]; // Vetor para armazenar as cidades
    int quantidade, i;

    printf("Quantas cidades deseja cadastrar? (Máximo %d): ", MAX_CIDADES);
    scanf("%d", &quantidade);

    // Validação da quantidade
    if (quantidade > MAX_CIDADES || quantidade <= 0) {
        printf("Número inválido de cidades!\n");
        return 1;
    }

    // Cadastro das cidades
    for (i = 0; i < quantidade; i++) {
        printf("\nCadastro da cidade %d:\n", i + 1);
        
        printf("Código da cidade (Ex: A01, B02): ");
        scanf(" %3s", cidades[i].codigo);

        printf("População: ");
        scanf("%d", &cidades[i].populacao);

        printf("Área (em km²): ");
        scanf("%f", &cidades[i].area);

        printf("PIB (em bilhões): ");
        scanf("%lf", &cidades[i].pib);

        printf("Número de pontos turísticos: ");
        scanf("%d", &cidades[i].pontos_turisticos);
    }

    // Exibição dos dados das cidades cadastradas
    printf("\n===== Cidades Cadastradas =====\n");
    for (i = 0; i < quantidade; i++) {
        printf("\nCódigo da Cidade: %s", cidades[i].codigo);
        printf("\nPopulação: %d habitantes", cidades[i].populacao);
        printf("\nÁrea: %.2f km²", cidades[i].area);
        printf("\nPIB: %.2lf bilhões", cidades[i].pib);
        printf("\nNúmero de Pontos Turísticos: %d\n", cidades[i].pontos_turisticos);
        printf("--------------------------------\n");
    }

    return 0;
}