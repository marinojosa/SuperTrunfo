#include <stdio.h>
int main (){

    char estado;
    char código [10];
    char nome_do_estado [20];
    int população;
    float área;
    float PIB;
    int pontos_turisticos;

    //cadastro da carta 01:

printf("CADASTRO DA CARTA 01 \n");

printf("Digite a inicial do estado: \n");
scanf("%s", &estado);

printf("Digite o código da carta: \n");
scanf("%s", &código);

printf("Digite o nome do estado: \n");
scanf("%s", &nome_do_estado);

printf("Qual a população? \n");
scanf("%d", &população);

printf("Qual o tamanho em área? \n");
scanf("%d", &área);

printf("Qual o PIB? \n");
scanf("%d", &PIB);

printf("Qual o número de pontos turísticos? \n");
scanf("%d", &pontos_turisticos);

printf("Cadastro da carta 01 realizado! \n");

return 0;

}