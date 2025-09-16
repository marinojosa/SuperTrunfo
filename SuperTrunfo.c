#include <stdio.h>

int main () {

    //variáveis carta 01:

    char estado1;
    int codigo1;
    char nome_do_estado1 [20];
    int populacao1;
    float area1;
    float PIB1;
    int pontos_turisticos1;

    //variáveis carta 02:

    char estado2;
    int codigo2;
    char nome_do_estado2 [20];
    int populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;
 
    //cadastro da carta 01:

    printf("----- CADASTRO DA CARTA 01 -----\n");

    printf("Digite a inicial do estado: \n");
    scanf("%c", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%d", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", nome_do_estado1); //Foi adicionado um espaço antes do %s para resolver o seginte bug: https://stackoverflow.com/questions/29775323/scanfc-call-seems-to-be-skipped

    printf("Qual é o número populacional? \n");
    scanf("%d", &populacao1);

    printf("Qual o tamanho em área? \n");
    scanf("%f", &area1);

    printf("Qual o PIB? \n");
    scanf("%f", &PIB1);

    printf("Quantos pontos turísticos existem nessa cidade? \n");
    scanf("%d", &pontos_turisticos1);

    printf("Cadastro da carta 01 realizado! \n\n");


    //cadastro da carta 02:
    printf("----- CADASTRO DA CARTA 02 -----\n");

    printf("Digite a inicial do estado: \n");
    scanf(" %c", &estado2); 
    printf("Digite o código da carta: \n");
    scanf("%d", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_do_estado2);

    printf("Qual é o número populacional? \n");
    scanf("%d", &populacao2);

    printf("Qual o tamanho em área? \n");
    scanf("%f", &area2);

    printf("Qual o PIB? \n");
    scanf("%f", &PIB2);

    printf("Quantos pontos turísticos existem nessa cidade? \n");
    scanf("%d", &pontos_turisticos2);



    printf("Cadastro da Carta 02 realizado! \n\n");

    // Exibição de cartas cadastradas:

    printf("----- CARTA 01 -----\n\n");
    printf("Estado: %c \n", estado1);
    printf("Código da Carta: %d \n", codigo1);
    printf("Nome do Estado: %s \n", nome_do_estado1);
    printf("População: %d \n", populacao1);
    printf("Área: %f \n", area1);
    printf("PIB: %f \n", PIB1);
    printf("Pontos turísticos: %d \n\n", pontos_turisticos1);

    printf("----- CARTA 02 -----\n\n");
    printf("Estado: %c \n", estado2);
    printf("Código da Carta: %d \n", codigo2);
    printf("Nome do Estado: %s \n", nome_do_estado2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", PIB2);
    printf("Pontos turísticos: %d \n", pontos_turisticos2);

    return 0;
}