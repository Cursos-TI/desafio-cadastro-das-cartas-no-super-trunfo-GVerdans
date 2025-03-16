#include <stdio.h>

int main()
{

    char estado1[2], codCarta1[3], nomeDaCidade1[50];
    int numPontosTuristicos1;
    float areaCidade1, PIB1, densiPop1, PIBPC1, superPoder1, inversoDensidade1;
    unsigned long int populacao1;
    
    
    // ENTRADA DE DADOS DA CARTA 1
    
    printf("\nDigite o Estado da carta 1: (A-H) \n");
    scanf("%s", estado1);
    
    printf("Digite o código da carta: \n");
    scanf("%s", codCarta1);
    
    printf("Digite o nome da Cidade: \n");
    scanf("%s", nomeDaCidade1);
    
    printf("Digite a quantidade da População da cidade: \n");
    scanf("%ld", &populacao1);
    
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &areaCidade1);
    
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB1);
    
    printf("Digite o numero de pontos turísticos da cidade: \n");
    scanf("%d", &numPontosTuristicos1);
    
    densiPop1 = (float)populacao1 / areaCidade1;
    PIBPC1 = PIB1 / populacao1;
    inversoDensidade1 = 1 / densiPop1;
    superPoder1 = (float)populacao1 + areaCidade1 + PIB1 + numPontosTuristicos1 + PIBPC1 + inversoDensidade1;
    
    
    // ENTRADA DE DADOS DA CARTA 2
    
    char estado2[2], codCarta2[3], nomeDaCidade2[50];
    int numPontosTuristicos2;
    float areaCidade2, PIB2, densiPop2, PIBPC2, superPoder2, inversoDensidade2;
    unsigned long int populacao2;

    
    
    printf("\nDigite o Estado da carta 2: (A-H) \n");
    scanf("%s", estado2);
    
    printf("Digite o código da carta: \n");
    scanf("%s", codCarta2);
    
    printf("Digite o nome da Cidade: \n");
    scanf("%s", nomeDaCidade2);
    
    printf("Digite a quantidade da População da cidade: \n");
    scanf("%ld", &populacao2);
    
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &areaCidade2);
    
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB2);
    
    printf("Digite o numero de pontos turísticos da cidade: \n");
    scanf("%d", &numPontosTuristicos2);

    
    
    densiPop2 = populacao2 / areaCidade2;
    PIBPC2 = PIB2 / populacao2;
    inversoDensidade2 = 1 / densiPop2;
    superPoder2 = (float)populacao2 + areaCidade2 + PIB2 + numPontosTuristicos2 + PIBPC2 + inversoDensidade2;

    
    // SAIDA DE DADOS DA CARTA 1
    
    printf("\nCarta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s%s\n", estado1, codCarta1);
    printf("Nome da Cidade: %s \n", nomeDaCidade1);
    printf("População: %ld \n", populacao1);
    printf("Área: %.2f km² \n", areaCidade1);
    printf("PIB: %.2f Bilhões de reais \n", PIB1);
    printf("Número de Pontos Turísticos: %d \n", numPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densiPop1);
    printf("PIB per Capita: %.2f reais\n", PIBPC1);
    printf("Super Poder: %.2f\n\n", superPoder1);
    
    // SAIDA DE DADOS DA CARTA 2
    printf("\nCarta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s%s\n", estado2, codCarta2);
    printf("Nome da Cidade: %s \n", nomeDaCidade2);
    printf("População: %ld \n", populacao2);
    printf("Área: %.2f km² \n", areaCidade2);
    printf("PIB: %.2f Bilhões de reais \n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", numPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densiPop2);
    printf("PIB per Capita: %.2f reais\n", PIBPC2);
    printf("Super Poder: %.2f\n\n", superPoder2);

    // COMPARAÇÕES


    printf("===========================\n");
    printf("|| Comparação de Cartas ||\n");
    printf("===========================\n\n");
    printf("Cartas 1 - 1\nCarta 2 - 0\n\n");

    printf("População: Carta %d\n", populacao1 > populacao2);
    printf("Área: Carta %d\n", areaCidade1 > areaCidade2);
    printf("PIB: Carta %d\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta %d\n", numPontosTuristicos1 > numPontosTuristicos2);
    printf("Densidade Populacional: Carta %d\n", densiPop1 < densiPop2);
    printf("PIB per Capita: Carta %d\n", PIBPC1 > PIBPC2);
    printf("Super Poder: Carta %d\n", superPoder1 > superPoder2);
    
    return 0;
}