#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigo, populacao, turismo;
    char nome[50];
    float area, pib;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Informe o nome da cidade:\n");
    scanf("%s", &nome);

    printf("Informe o código da cidade:\n");
    scanf("%d", &codigo);

    printf("Qual o tamanho da população?\n");
    scanf("%d", &populacao);

    printf("Informe a área:\n");
    scanf("%f", &area);

    printf("Informe o PIB:\n");
    scanf("%f", &pib);

    printf("Informe a quantidade de pontos turísticos:\n");
    scanf("%d", &turismo);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("%d - %s\n", codigo, nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %fm^2\n", area);
    printf("PIB: R$%d\n", pib);
    printf("Pontos turísticos: %d ponto(s)", turismo);

    return 0;
}
