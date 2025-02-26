#include <stdio.h>

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

        int escolha, escolha2, resultado, cidade1atributo1, cidade1atributo2, cidade2atributo1, cidade2atributo2, soma, soma2;

        printf("Escolha a primeira opção para comparar:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade\n");
        printf("6. PIB per Capita\n");
        printf("7. Super Poder\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        printf("\n\nEscolha a segunda opção para comparar:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade\n");
        printf("6. PIB per Capita\n");
        printf("7. Super Poder\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha2);

        if (escolha == escolha2)
        {
            printf("\n\nVocê deve escolher opções diferentes\n");
        }
        else
        {
            printf("\n\nVamos comparar o primeiro atributo!\n");
            switch (escolha)
            {
            case 1:
                resultado = populacao > populacao2 ? 1 : 0;
                resultado = populacao == populacao2 ? 2 : 0;
                printf("População de %s: %d\n", nome, populacao);
                printf("População de %s: %d\n", nome2, populacao2);
                cidade1atributo1 = (int)populacao;
                cidade2atributo1 = (int)populacao2;
                break;
            case 2:
                resultado = area > area2 ? 1 : 0;
                resultado = area == area2 ? 2 : 0;
                printf("Área de %s: %f\n", nome, area);
                printf("Área de %s: %f\n", nome2, area2);
                cidade1atributo1 = (int)area;
                cidade2atributo1 = (int)area2;
                break;
            case 3:
                resultado = pib > pib2 ? 1 : 0;
                resultado = pib == pib2 ? 2 : 0;
                printf("PIB de %s: %f\n", nome, pib);
                printf("PIB de %s: %f\n", nome2, pib2);
                cidade1atributo1 = (int)pib;
                cidade2atributo1 = (int)pib2;
                break;
            case 4:
                resultado = turismo > turismo2 ? 1 : 0;
                resultado = turismo == turismo2 ? 2 : 0;
                printf("Pontos Turísticos de %s: %f\n", nome, turismo);
                printf("Pontos Turísticos de %s: %f\n", nome2, turismo2);
                cidade1atributo1 = (int)turismo;
                cidade2atributo1 = (int)turismo2;
                break;
            case 5:
                resultado = densidade < densidade2 ? 1 : 0;
                resultado = densidade == densidade2 ? 2 : 0;
                printf("Densidade de %s: %f\n", nome, densidade);
                printf("Densidade de %s: %f\n", nome2, densidade2);
                cidade1atributo1 = (int)densidade;
                cidade2atributo1 = (int)densidade2;
                break;
            case 6:
                resultado = perCapita > perCapita2 ? 1 : 0;
                resultado = perCapita == perCapita2 ? 2 : 0;
                printf("Pib per Capita de %s: %f\n", nome, perCapita);
                printf("Pib per Capita de %s: %f\n", nome2, perCapita2);
                cidade1atributo1 = (int)perCapita;
                cidade2atributo1 = (int)perCapita2;
                break;
            case 7:
                resultado = superPoder > superPoder2 ? 1 : 0;
                resultado = superPoder == superPoder2 ? 2 : 0;
                printf("Super Poder de %s: %f\n", nome, superPoder);
                printf("Super Poder de %s: %f\n", nome2, superPoder2);
                cidade1atributo1 = (int)superPoder;
                cidade2atributo1 = (int)superPoder2;
                break;

            default:
                printf("Opção incorreta!");
                break;
            }

            if (resultado == 1)
            {
                printf("%s venceu a primeira rodada!\n", nome);
            }
            else if (resultado == 2)
            {
                printf("Houve um empate!\n");
            }
            else
            {
                printf("%s venceu a primeira rodada!\n", nome2);
            }

            printf("\n\nVamos comparar o segundo atributo!\n");
            switch (escolha2)
            {
            case 1:
                resultado = populacao > populacao2 ? 1 : 0;
                resultado = populacao == populacao2 ? 2 : 0;
                printf("População de %s: %d\n", nome, populacao);
                printf("População de %s: %d\n", nome2, populacao2);
                cidade1atributo2 = (int)populacao;
                cidade2atributo2 = (int)populacao2;
                break;
            case 2:
                resultado = area > area2 ? 1 : 0;
                resultado = area == area2 ? 2 : 0;
                printf("Área de %s: %f\n", nome, area);
                printf("Área de %s: %f\n", nome2, area2);
                cidade1atributo2 = (int)area;
                cidade2atributo2 = (int)area2;
                break;
            case 3:
                resultado = pib > pib2 ? 1 : 0;
                resultado = pib == pib2 ? 2 : 0;
                printf("PIB de %s: %f\n", nome, pib);
                printf("PIB de %s: %f\n", nome2, pib2);
                cidade1atributo2 = (int)pib;
                cidade2atributo2 = (int)pib2;
                break;
            case 4:
                resultado = turismo > turismo2 ? 1 : 0;
                resultado = turismo == turismo2 ? 2 : 0;
                printf("Pontos Turísticos de %s: %f\n", nome, turismo);
                printf("Pontos Turísticos de %s: %f\n", nome2, turismo2);
                cidade1atributo2 = (int)turismo;
                cidade2atributo2 = (int)turismo2;
                break;
            case 5:
                resultado = densidade < densidade2 ? 1 : 0;
                resultado = densidade == densidade2 ? 2 : 0;
                printf("Densidade de %s: %f\n", nome, densidade);
                printf("Densidade de %s: %f\n", nome2, densidade2);
                cidade1atributo2 = (int)densidade;
                cidade2atributo2 = (int)densidade2;
                break;
            case 6:
                resultado = perCapita > perCapita2 ? 1 : 0;
                resultado = perCapita == perCapita2 ? 2 : 0;
                printf("Pib per Capita de %s: %f\n", nome, perCapita);
                printf("Pib per Capita de %s: %f\n", nome2, perCapita2);
                cidade1atributo2 = (int)perCapita;
                cidade2atributo2 = (int)perCapita2;
                break;
            case 7:
                resultado = superPoder > superPoder2 ? 1 : 0;
                resultado = superPoder == superPoder2 ? 2 : 0;
                printf("Super Poder de %s: %f\n", nome, superPoder);
                printf("Super Poder de %s: %f\n", nome2, superPoder2);
                cidade1atributo2 = (int)superPoder;
                cidade2atributo2 = (int)superPoder2;
                break;

            default:
                printf("Opção incorreta!");
                break;
            }

            if (resultado == 1)
            {
                printf("%s venceu a segunda rodada!\n", nome);
            }
            else if (resultado == 2)
            {
                printf("Houve um empate!\n");
            }
            else
            {
                printf("%s venceu a segunda rodada!\n", nome2);
            }

            soma = (int)cidade1atributo1 + cidade1atributo2;
            soma2 = (int)cidade2atributo1 + cidade2atributo2;

            printf("\n\nVamos somar e ver quem é o vencedor da soma!\n");
            printf("A soma de %s foi: %d\n", nome, soma);
            printf("A soma de %s foi: %d\n", nome2, soma2);

            resultado = soma > soma2 ? 1 : 0;
            resultado = soma == soma2 ? 2 : 0;

            if (resultado == 1)
            {
                printf("%s venceu a soma!\n", nome);
            }
            else if (resultado == 2)
            {
                printf("Houve um empate!\n");
            }
            else
            {
                printf("%s venceu a soma!\n", nome2);
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
    }

    return 0;
}
