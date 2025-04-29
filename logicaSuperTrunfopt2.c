#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação d;
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {


    //declaração de variaveis e captura de dados para tratamento
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


    //calculo de densidade e pibpercapta
    densi = populacao / area;
    densi2 =  populacao2 / area2;

    pibper = pib / populacao;
    pibper2 = pib2 / populacao2;


    //menu swich com seleção de casos
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

        if( populacao > populacao2) {

            printf("País 1: %s e País 2: %s\n", pais1, pais2);
            printf("O Atributo selecionado foi 'População'\n");
            printf("População de %s: %d \n População de %s: %d\n", pais1, populacao, pais2, populacao2);
            printf("A carta 1 venceu!!");

        } else {

            printf("País 1: %s e País 2: %s\n", pais1, pais2);
            printf("O Atributo selecionado foi 'População'\n");
            printf("População de %s: %d \n População de %s: %d\n", pais1, populacao, pais2, populacao2);
            printf("A carta 2 venceu!!");
        }
        break;

    case 2:

        if( area > area2) {

            printf("País 1: %s e País 2: %s\n", pais1, pais2);
            printf("O Atributo selecionado foi 'Área'\n");
            printf("Area de %s: %d \n Area de %s: %d\n", pais1, area, pais2, area2);
            printf("A carta 1 venceu!!");

    } else{

            printf("País 1: %s e País 2: %s\n", pais1, pais2);
            printf("O Atributo selecionado foi 'Área'\n");
            printf("Area de %s: %d \n Area de %s: %d\n", pais1, area, pais2, area2);
            printf("A carta 2 venceu!!");
    }

        break;

    case 3:
        if( pib > pib2) {

            printf("País 1: %s e País 2: %s\n", pais1, pais2);
            printf("O Atributo selecionado foi 'PIB'\n");
            printf("PIB de %s: %d \n PIB de %s: %d\n", pais1, pib, pais2, pib2);
            printf("A carta 1 venceu!!");

    } else{
        printf("País 1: %s e País 2: %s\n", pais1, pais2);
        printf("O Atributo selecionado foi 'PIB'\n");
        printf("PIB de %s: %d \n PIB de %s: %d\n", pais1, pib, pais2, pib2);
        printf("A carta 2 venceu!!");

    }
        break;

    case 4:
        if( pontoP > pontoP2) {

            printf("País 1: %s e País 2: %s\n", pais1, pais2);
            printf("O Atributo selecionado foi 'Pontos Turisticos'\n");
            printf("Pontos Turisticos de %s: %d \n Pontos Turisticos de %s: %d\n", pais1, pontoP, pais2, pontoP2);
            printf("A carta 1 venceu!!");

    } else {

            printf("País 1: %s e País 2: %s\n", pais1, pais2);
            printf("O Atributo selecionado foi 'Pontos Turisticos'\n");
            printf("Pontos Turisticos de %s: %d \n Pontos Turisticos de %s: %d\n", pais1, pontoP, pais2, pontoP2);
            printf("A carta 2 venceu!!");
    }
        break;        

    case 5:
        if( densi > densi2) {

            printf("País 1: %s e País 2: %s\n", pais1, pais2);
            printf("O Atributo selecionado foi 'Densidade'\n");
            printf("Densidade de %s: %d \n Densidade de %s: %d\n", pais1, densi, pais2, densi2);
            printf("A carta 1 venceu!!");

    } else{

            printf("País 1: %s e País 2: %s\n", pais1, pais2);
            printf("O Atributo selecionado foi 'Densidade'\n");
            printf("Densidade de %s: %d \n Densidade de %s: %d\n", pais1, densi, pais2, densi2);
            printf("A carta 2 venceu!!");
    }
        break;

    default:
    printf("Opção Invalida!");
        break;
    }

     

     

    return 0;
}