#include <stdio.h>
int main (){

//variáveis da carta 01:

    char estado1;
    char código1 [10];
    char nome_do_estado1 [20];
    int população1;
    float área1;
    float PIB1;
    int pontos_turisticos1;

//cadastro da carta 01:

printf("CADASTRO DA CARTA 01 \n");

printf("Digite a inicial do estado: \n");
scanf("%s", &estado1);

printf("Digite o código da carta: \n");
scanf("%s", código1);

printf("Digite o nome do estado: \n");
scanf("%s", nome_do_estado1);

printf("Qual a população? \n");
scanf("%d", &população1);

printf("Qual o tamanho em área? \n");
scanf("%d", &área1);

printf("Qual o PIB? \n");
scanf("%d", &PIB1);

printf("Qual o número de pontos turísticos? \n");
scanf("%d", &pontos_turisticos1);

printf("Cadastro da carta 01 realizado! \n");

 //variáveis da carta 02:

    char estado2;
    char código2 [10];
    char nome_do_estado2 [20];
    int população2;
    float área2;
    float PIB2;
    int pontos_turisticos2;

//cadastro da carta 02:

printf("CADASTRO DA CARTA 02 \n");

printf("Digite a inicial do estado: \n");
scanf("%s", &estado2);

printf("Digite o código da carta: \n");
scanf("%s", código2);

printf("Digite o nome do estado: \n");
scanf("%s", nome_do_estado2);

printf("Qual a população? \n");
scanf("%d", &população2);

printf("Qual o tamanho em área? \n");
scanf("%d", &área2);

printf("Qual o PIB? \n");
scanf("%d", &PIB2);

printf("Qual o número de pontos turísticos? \n");
scanf("%d", &pontos_turisticos2);

printf("Cadastro da Carta 02 realizado! \n");

// Exibição de cartas cadastradas:

printf("Carta 01 \n");
printf("Estado: %s \n", estado1);

printf("Código da Carta: %d \n", código1);
printf("Nome do Estado: %s \n", nome_do_estado1);
printf("População: %d \n", população1);
printf("Área: %d \n", área1);
printf("PIB: %d \n", PIB1);
printf("Pontos turísticos: %d \n", pontos_turisticos1);

printf("Carta 02 \n");
printf("Estado: %s \n", estado2);
printf("Código da Carta: %d \n", código2);
printf("Nome do Estado: %s \n", nome_do_estado2);
printf("População: %d \n", população2);
printf("Área: %d \n", área2);
printf("PIB: %d \n", PIB2);
printf("Pontos turísticos: %d \n", pontos_turisticos2);

return 0;




























































































































}