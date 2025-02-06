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
    float area, pib, densidade, perCapita;

    int codigo2, populacao2, turismo2;
    char nome2[50];
    float area2, pib2, densidade2, perCapita2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("*** SUPER TRUNFO ***\n\n");

    printf("Hora de cadastrar primeira carta:\n\n");
    
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

    printf("Informe a quantidade de pontos turísticos:\n\n");
    scanf("%d", &turismo);

    densidade = (float)populacao / area;
    perCapita = (float)pib / populacao;

    int superPoder = (int)populacao + turismo + area + pib + densidade + perCapita;

    printf("Hora de cadastrar segunda carta:\n\n");

    printf("Informe o nome da cidade:\n");
    scanf("%s", &nome2);

    printf("Informe o código da cidade:\n");
    scanf("%d", &codigo2);

    printf("Qual o tamanho da população?\n");
    scanf("%d", &populacao2);

    printf("Informe a área:\n");
    scanf("%f", &area2);

    printf("Informe o PIB:\n");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turísticos:\n\n");
    scanf("%d", &turismo2);

    densidade2 = (float)populacao2 / area2;
    perCapita2 = (float)pib2 / populacao2;

    int superPoder2 = (int)populacao2 + turismo2 + area2 + pib2 + densidade2 + perCapita2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("*** Carta 1 ***\n");
    printf("%d - %s\n", codigo, nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2fm^2\n", area);
    printf("PIB: R$%.2f\n", pib);
    printf("Pontos turísticos: %d ponto(s)\n", turismo);
    printf("Densidade: %.2f\n", densidade);
    printf("Pib per Capita: %.2f\n", perCapita);
    printf("Super Poder: %d\n\n", superPoder);

    printf("*** Carta 2 ***\n");
    printf("%d - %s\n", codigo2, nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2fm^2\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Pontos turísticos: %d ponto(s)\n", turismo2);
    printf("Densidade: %.2f\n", densidade2);
    printf("Pib per Capita: %.2f\n", perCapita2);
    printf("Super Poder: %d\n\n", superPoder2);

    printf("Hora de definir os vencedores!\n\n");

    if (populacao > populacao)
    {
        printf("População: %s\n", nome);
    }
    else
    {
        printf("População: %s\n", nome2);
    }

    if (area > area2)
    {
        printf("Área: %s\n", nome);
    }
    else
    {
        printf("Área: %s\n", nome2);
    }

        if (pib > pib2)
    {
        printf("PIB: %s\n", nome);
    }
    else
    {
        printf("PIB: %s\n", nome2);
    }

        if (turismo > turismo)
    {
        printf("Pontos Turísticos: %s\n", nome);
    }
    else
    {
        printf("Pontos Turísticos: %s\n", nome2);
    }

        if (densidade < densidade)
    {
        printf("Densidade: %s\n", nome);
    }
    else
    {
        printf("Densidade: %s\n", nome2);
    }

        if (perCapita > perCapita2)
    {
        printf("Pib per Capita: %s\n", nome);
    }
    else
    {
        printf("Pib per Capita: %s\n", nome2);
    }

        if (superPoder > superPoder2)
    {
        printf("Super Poder: %s\n", nome);
    }
    else
    {
        printf("Super Poder: %s\n", nome2);
    }

    return 0;
}
