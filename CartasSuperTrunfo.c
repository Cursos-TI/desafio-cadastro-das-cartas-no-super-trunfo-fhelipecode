#include <stdio.h>
#include <string.h>

int main() {

    // Declaração das variaveis da carta 1
    char estado1[3];
    char codigo1[5];
    char nomeCidade1[50];
    unsigned long int populacao1;
    double area1;
    double pib1;
    int pontosTuristicos1;
    double densidadePopulacional1 = 0.0;
    double pibperCapita1 = 0.0;
    float superPoder1;

    //Declaração das variaveis da carta 2
    char estado2[3];
    char codigo2[5];
    char nomeCidade2[50];
    unsigned long int populacao2;
    double area2;
    double pib2;
    int pontosTuristicos2;
    double densidadePopulacional2 = 0.0;
    double pibperCapita2 = 0.0;
    float superPoder2;


    //Entrada da carta 1

    printf("Cadastro da Carta 1:\n");
    printf("Digite a letra do Estado:");
    scanf("%s", estado1);

    printf("Digite o código da carta:");
    scanf("%s", codigo1);

    getchar();

    printf("Digite o nome da Cidade:");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    if (nomeCidade1[strlen(nomeCidade1) - 1] == '\n') {
        nomeCidade1[strlen(nomeCidade1) - 1] = '\0';
    }

    printf("Digite a população da Cidade (sem pontos):");
    scanf("%lu", &populacao1);

    printf("Digite a Área da cidade(em Km²):");
    scanf("%lf", &area1);

    printf("Digite o PIB da Cidade:");
    scanf("%lf", &pib1);

    printf("Digite o Número de pontos Turísticos:");
    scanf("%d", &pontosTuristicos1);


    //Entrada da carte 2

    printf("Cadastro da Carta 2:\n");
    printf("Digite a letra do Estado:");
    scanf("%s", estado2);

    printf("Digite o código da carta:");
    scanf("%s", codigo2);

    getchar();

    printf("Digite o nome da Cidade:");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    if (nomeCidade2[strlen(nomeCidade2) - 1] == '\n') {
        nomeCidade2[strlen(nomeCidade2) - 1] = '\0';
    }

    printf("Digite a população da Cidade ( sem pontos):");
    scanf("%lu", &populacao2);

    printf("Digite a Área da cidade(em Km²):");
    scanf("%lf", &area2);

    printf("Digite o PIB da Cidade:");
    scanf("%lf", &pib2);

    printf("Digite o Número de pontos Turísticos:");
    scanf("%d", &pontosTuristicos2);

    //Cálculos - Carta 1
    if (area1 != 0.0)
        densidadePopulacional1 = populacao1 / area1;
    if (populacao1 != 0)
        pibperCapita1 = (pib1 * 1000000000) / (double)populacao1;

    superPoder1 = (float)(populacao1 + area1 + pib1 + pontosTuristicos1 + pibperCapita1);
    superPoder1 += (float)((densidadePopulacional1 != 0.0) ? (1.0 / densidadePopulacional1) : 0.0);

    // Cálculos - Carta 2
    if (area2 != 0.0)
        densidadePopulacional2 = populacao2 / area2;
    if (populacao2 != 0)
        pibperCapita2 = (pib2 * 1000000000) / (double)populacao2;

    superPoder2 = (float)(populacao2 + area2 + pib2 + pontosTuristicos2 + pibperCapita2);
    superPoder2 += (float)((densidadePopulacional2 != 0.0) ? (1.0 / densidadePopulacional2) : 0.0);


    //Exibição da carta 1

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2lf Km²\n", area1);
    printf("PIB: %.2lf Bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2lf reais\n", pibperCapita1);

    //Exibição Carta 2

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2lf Km²\n", area2);
    printf("PIB: %.2lf Bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2lf reais\n", pibperCapita2);

    // Comparações
    int resultadoPopulacao = (populacao1 > populacao2);
    int resultadoArea = (area1 > area2);
    int resultadoPIB = (pib1 > pib2);
    int resultadoPontosTuristicos = (pontosTuristicos1 > pontosTuristicos2);
    int resultadoDensidade = (densidadePopulacional1 < densidadePopulacional2); // menor vence
    int resultadoPIBperCapita = (pibperCapita1 > pibperCapita2);
    int resultadoSuperPoder = (superPoder1 > superPoder2);

    //Exibição das comparações
    printf("\n=== Comparações (1 = vence, 0 = perde) ===\n");
    printf("População: %d\n", resultadoPopulacao);
    printf("Área: %d\n", resultadoArea);
    printf("PIB: %d\n", resultadoPIB);
    printf("Pontos Turísticos: %d\n", resultadoPontosTuristicos);
    printf("Densidade Populacional (menor vence): %d\n", resultadoDensidade);
    printf("PIB per Capita: %d\n", resultadoPIBperCapita);
    printf("Super Poder: %d\n", resultadoSuperPoder);

    return 0;

}
