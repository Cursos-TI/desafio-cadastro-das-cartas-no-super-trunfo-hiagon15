#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    int opcao;
    int codigo, populacao, turismo;
    char nome[50];
    float area, pib, densidade, perCapita;

    int codigo2, populacao2, turismo2;
    char nome2[50];
    float area2, pib2, densidade2, perCapita2;

    printf("*** SUPER TRUNFO ***\n\n");
    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
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

        printf("Informe a quantidade de pontos turísticos:\n");
        scanf("%d", &turismo);

        densidade = (float)populacao / area;
        perCapita = (float)pib / populacao;

        int superPoder = (int)populacao + turismo + area + pib + densidade + perCapita;

        printf("\n\nHora de cadastrar segunda carta:\n\n");

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

        printf("Informe a quantidade de pontos turísticos:\n");
        scanf("%d", &turismo2);

        densidade2 = (float)populacao2 / area2;
        perCapita2 = (float)pib2 / populacao2;

        int superPoder2 = (int)populacao2 + turismo2 + area2 + pib2 + densidade2 + perCapita2;

        printf("\n\n*** Carta 1 ***\n");
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

        int escolha;

        printf("Escolha uma das opções abaixo para comparar:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade\n");
        printf("6. PIB per Capita\n");
        printf("7. Super Poder\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            if (populacao > populacao2)
            {
                printf("%s venceu!\n", nome);
                printf("População de %s: %d\n", nome, populacao);
                printf("População de %s: %d\n", nome2, populacao2);
            }
            else if (populacao < populacao2)
            {
                printf("%s venceu!\n", nome2);
                printf("População de %s: %d\n", nome, populacao);
                printf("População de %s: %d\n", nome2, populacao2);
            }
            else
            {
                printf("Houve um empate!\n");
                printf("População de %s: %d\n", nome, populacao);
                printf("População de %s: %d\n", nome2, populacao2);
            }
            break;
        case 2:
            if (area > area2)
            {
                printf("%s venceu!\n", nome);
                printf("Área de %s: %f\n", nome, area);
                printf("Área de %s: %f\n", nome2, area2);
            }
            else if (area < area2)
            {
                printf("%s venceu!\n", nome2);
                printf("Área de %s: %f\n", nome, area);
                printf("Área de %s: %f\n", nome2, area2);
            }
            else
            {
                printf("Houve um empate!\n");
                printf("Área de %s: %f\n", nome, area);
                printf("Área de %s: %f\n", nome2, area2);
            }
            break;
        case 3:
            if (pib > pib2)
            {
                printf("%s venceu!\n", nome);
                printf("PIB de %s: %f\n", nome, pib);
                printf("PIB de %s: %f\n", nome2, pib2);
            }
            else if (pib < pib2)
            {
                printf("%s venceu!\n", nome2);
                printf("PIB de %s: %f\n", nome, pib);
                printf("PIB de %s: %f\n", nome2, pib2);
            }
            else
            {
                printf("Houve um empate!\n");
                printf("PIB de %s: %f\n", nome, pib);
                printf("PIB de %s: %f\n", nome2, pib2);
            }
            break;
        case 4:
            if (turismo > turismo2)
            {
                printf("%s venceu!\n", nome);
                printf("Pontos Turísticos de %s: %f\n", nome, turismo);
                printf("Pontos Turísticos de %s: %f\n", nome2, turismo2);
            }
            else if (turismo < turismo2)
            {
                printf("%s venceu!\n", nome2);
                printf("Pontos Turísticos de %s: %f\n", nome, turismo);
                printf("Pontos Turísticos de %s: %f\n", nome2, turismo2);
            }
            else
            {
                printf("Houve um empate!\n");
                printf("Pontos Turísticos de %s: %f\n", nome, turismo);
                printf("Pontos Turísticos de %s: %f\n", nome2, turismo2);
            }
            break;
        case 5:
            if (densidade < densidade)
            {
                printf("%s venceu!\n", nome);
                printf("Densidade de %s: %f\n", nome, densidade);
                printf("Densidade de %s: %f\n", nome2, densidade2);
            }
            else if (densidade > densidade)
            {
                printf("%s venceu!\n", nome2);
                printf("Densidade de %s: %f\n", nome, densidade);
                printf("Densidade de %s: %f\n", nome2, densidade2);
            }
            else
            {
                printf("Houve um empate!\n");
                printf("Densidade de %s: %f\n", nome, densidade);
                printf("Densidade de %s: %f\n", nome2, densidade2);
            }
            break;
        case 6:
            if (perCapita > perCapita2)
            {
                printf("%s venceu!\n", nome);
                printf("Pib per Capita de %s: %f\n", nome, perCapita);
                printf("Pib per Capita de %s: %f\n", nome2, perCapita2);
            }
            else if (perCapita < perCapita2)
            {
                printf("%s venceu!\n", nome2);
                printf("Pib per Capita de %s: %f\n", nome, perCapita);
                printf("Pib per Capita de %s: %f\n", nome2, perCapita2);
            }
            else
            {
                printf("Houve um empate!\n");
                printf("Pib per Capita de %s: %f\n", nome, perCapita);
                printf("Pib per Capita de %s: %f\n", nome2, perCapita2);
            }
            break;
        case 7:
            if (superPoder > superPoder2)
            {
                printf("%s venceu!\n", nome);
                printf("Super Poder de %s: %f\n", nome, superPoder);
                printf("Super Poder de %s: %f\n", nome2, superPoder2);
            }
            else if (superPoder < superPoder2)
            {
                printf("%s venceu!\n", nome2);
                printf("Super Poder de %s: %f\n", nome, superPoder);
                printf("Super Poder de %s: %f\n", nome2, superPoder2);
            }
            else
            {
                printf("Houve um empate!\n");
                printf("Super Poder de %s: %f\n", nome, superPoder);
                printf("Super Poder de %s: %f\n", nome2, superPoder2);
            }
            break;

        default:
            printf("Opção incorreta!");
            break;
        }
        break;
    case 2:
        printf("1. Cadastre as cartas.\n");
        printf("2. Escolha um atributo.\n");
        printf("3. Vence a carta com o melhor atributo.\n");
        break;
    case 3:
        printf("Saindo...\n");
        break;
    default:
        printf("Opção incorreta!");
        break;
    }

    return 0;
}
