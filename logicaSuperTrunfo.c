#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação d;
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    char codigocarta[20], codigocarta2[20], codigoEstado2[3], codigoEstado[3], cidade[50], cidade2[50];
    int populacao, populacao2, pontoP2, pontoP;
    float area, area2, pib, pib2, densi, densi2, pibper, pibper2;

    printf("Digite os dados da Primeira Carta\n");
    printf("Digite o Codigo do Estado: \n");
    scanf(" %s", codigoEstado);
    printf("Digite o Codigo da Carta: \n");
    scanf(" %s", codigocarta);  
    printf("Digite o Nome Cidade: \n");
    scanf(" %s", cidade);
    printf("Digite a População: \n");
    scanf("%d", &populacao);
    printf("Digite a Area: \n");
    scanf("%f", &area);
    printf("Digite o Pib: \n");
    scanf("%f", &pib);
    printf("Digite Numero de Pontos Turisticos: \n");
    scanf("%d", &pontoP);

    printf("\nDigite os dados da Segunda Carta\n");
    printf("Digite o Codigo do Estado: \n");
    scanf(" %s", codigoEstado2);
    printf("Digite o Codigo da Carta: \n");
    scanf(" %s", codigocarta2);  
    printf("Digite o Nome Cidade: \n");
    scanf(" %s", cidade2);
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


    printf("A densidade Populacional da Carta 1 é de: %2.f \n", densi);
    printf("O PIB per Capta da Carta 1 é de: %2.f \n", pibper);
    printf("A densidade Populacional da Carta 2 é de: %2.f \n", densi2);
    printf("O PIB per Capta da Carta 2 é de: %2.f \n", pibper2);


     if (populacao > populacao2) {
         printf("Comparação de Cartas Atributo: População.\n");
         printf("Carta 1 %s (%s): %d \n", cidade, codigoEstado, populacao);
         printf("Carta 2 %s (%s): %d \n", cidade2, codigoEstado2, populacao2);
         printf("A cidade vencedora é: %s\n", cidade);
     } else {
        printf("Comparação de Cartas Atributo: População.\n");
        printf("Carta 1 %s (%s): %d \n", cidade, codigoEstado, populacao);
        printf("Carta 2 %s (%s): %d \n", cidade2, codigoEstado2, populacao2);
        printf("A cidade vencedora é: %s\n", cidade2);

     }

     

    return 0;
}
