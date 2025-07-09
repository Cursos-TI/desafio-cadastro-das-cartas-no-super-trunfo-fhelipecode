#include <stdio.h>
#include <string.h>

int main() {

    // Declaração das variaveis da carta 1
    char estado1[3];
    char codigo1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    double pib1;
    int pontosTuristicos1;

    //Declaração das variaveis da carta 2
    char estado2[3];
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    double pib2;
    int pontosTuristicos2;


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
    scanf("%d", &populacao1);

    printf("Digite a Área da cidade(em Km²):");
    scanf("%f", &area1);

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
    scanf("%d", &populacao2);

    printf("Digite a Área da cidade(em Km²):");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade:");
    scanf("%lf", &pib2);

    printf("Digite o Número de pontos Turísticos:");
    scanf("%d", &pontosTuristicos2);


    //Exibição da carta 1

    printf("\nCarta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %lf Bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    //Exibição Carta 2

    printf("\nCarta 1: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %lf Bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;

}
