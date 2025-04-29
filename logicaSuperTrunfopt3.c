#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação d;
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    char pais1[20], pais2[20];
    int populacao, populacao2, pontoP2, pontoP, opcao;
    float area, area2, pib, pib2, densi, densi2, pibper, pibper2;

    printf("Digite os dados da Primeira Carta\n");

    printf("Digite o Nome País: \n");
    scanf(" %s", pais1);
    printf("Digite a População: \n");
    scanf("%d", &populacao);
    printf("Digite a Area: \n");
    scanf("%f", &area);
    printf("Digite o Pib: \n");
    scanf("%f", &pib);
    printf("Digite Numero de Pontos Turisticos: \n");
    scanf("%d", &pontoP);

    printf("Digite o Nome País: \n");
    scanf(" %s", pais1);
    printf("Digite a População: \n");
    scanf("%d", &populacao2);
    printf("Digite a Area: \n");
    scanf("%f", &area2);
    printf("Digite o Pib: \n");
    scanf("%f", &pib2);
    printf("Digite Numero de Pontos Turisticos: \n");
    scanf("%d", &pontoP2);


    densi = populacao / area;
    densi2 =  populacao2 / area2;

    pibper = pib / populacao;
    pibper2 = pib2 / populacao2;


    printf("**Selecione o Atributo para Comparação**\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. N Pontos Turisticos \n");
    printf("5. Densidade Demografica \n");
    scanf("%d", &opcao);


    switch (opcao)
    {
    case 1:


        }
        break;

    case 2:
        /* code */
        break;

    case 3:
         /* code */
        break;

    case 4:
        /* code */
        break;        

    case 5:

        break;

    default:
    printf("Opção Invalida!");
        break;
    }

     

     

    return 0;
}