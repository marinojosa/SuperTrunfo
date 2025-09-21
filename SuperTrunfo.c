#include <stdio.h>

int main () {

    //variáveis carta 01:

    char estado1;
    char codigo1 [3];
    char nome_da_cidade1 [20];
    unsigned int populacao1;
    float area1;
    float PIB1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    //variáveis carta 02:

    char estado2;
    char codigo2 [3];
    char nome_da_cidade2 [20];
    unsigned int populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    //cadastro da carta 01:

    printf("----- CADASTRO DA CARTA 01 -----\n");

    printf("Digite a inicial do estado (letra de A - H): \n");
    scanf("%c", &estado1);

    printf("Digite o código da carta (letra do estado seguida de um número de 01 a 04): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", nome_da_cidade1); //Foi adicionado um espaço antes do %s para resolver o seginte bug: https://stackoverflow.com/questions/29775323/scanfc-call-seems-to-be-skipped

    printf("Qual é o número populacional? \n");
    scanf("%u", &populacao1);

    printf("Qual o tamanho em área? \n");
    scanf("%f", &area1);

    printf("Qual o PIB? \n");
    scanf("%f", &PIB1);

    printf("Quantos pontos turísticos existem nessa cidade? \n");
    scanf("%d", &pontos_turisticos1);

    printf("Calculando informações adicionais... \n");
    printf("... \n");
    printf("... \n\n");

    densidade_populacional1 = (populacao1 / area1);
    pib_per_capita1 = (PIB1 / populacao1);
    super_poder1 = (populacao1 + area1 + PIB1 + pontos_turisticos1 + ( 1 / densidade_populacional1) + pib_per_capita1);

    printf("Cadastro da carta 01 realizado! \n\n");

    //cadastro da carta 02:

    printf("----- CADASTRO DA CARTA 02 -----\n");

    printf("Digite a inicial do estado (letra de A - H): \n");
    scanf(" %c", &estado2); 
    printf("Digite o código da carta (letra do estado seguida de um número de 01 a 04): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade2);

    printf("Qual é o número populacional? \n");
    scanf("%u", &populacao2);

    printf("Qual o tamanho em área? \n");
    scanf("%f", &area2);

    printf("Qual o PIB? \n");
    scanf("%f", &PIB2);

    printf("Quantos pontos turísticos existem nessa cidade? \n");
    scanf("%d", &pontos_turisticos2);

    printf("Calculando informações adicionais... \n");
    printf("... \n");
    printf("... \n\n");

    densidade_populacional2 = (populacao2 / area2);
    pib_per_capita2 = (PIB2 / populacao2);
    super_poder1 = (populacao2 + area2 + PIB2 + pontos_turisticos2 + ( 1 / densidade_populacional2) + pib_per_capita2);

    printf("Cadastro da Carta 02 realizado! \n\n");

    // Exibição de cartas cadastradas:

    printf("----- CARTA 01 -----\n\n");
    printf("Estado: %c \n", estado1);
    printf("Código da Carta: %s \n", codigo1);
    printf("Nome do Estado: %s \n", nome_da_cidade1);
    printf("População: %u \n", populacao1);
    printf("Área: %f km² \n", area1);
    printf("PIB: %f  bilhões de reais \n", PIB1);
    printf("Pontos turísticos: %d \n", pontos_turisticos1);
    printf("Densidade Populacional: %f \n", densidade_populacional1);
    printf("PIB per capita: %f \n", pib_per_capita1);
    printf("Super Poder: %f \n\n", super_poder1);

    printf("----- CARTA 02 ----- \n\n");
    printf("Estado: %c \n", estado2);
    printf("Código da Carta: %s \n", codigo2);
    printf("Nome do Estado: %s \n", nome_da_cidade2);
    printf("População: %u \n", populacao2);
    printf("Área: %f km² \n", area2);
    printf("PIB: %f  bilhões de reais \n", PIB2);
    printf("Pontos turísticos: %d \n", pontos_turisticos2);
    printf("Densidade Populacional: %f \n", densidade_populacional2);
    printf("PIB per capita: %f \n", pib_per_capita2);
    printf("Super Poder: %f \n\n", super_poder2);

    //COMPARAÇÃO DAS CARTAS:
    //printf("----- COMPARAÇÃO DAS CARTAS ----- \n\n");

    //printf("populacao1 > populacao2: %u\n", populacao1 > populacao2);


    return 0;
}