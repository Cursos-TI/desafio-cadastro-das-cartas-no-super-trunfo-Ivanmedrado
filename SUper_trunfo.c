#include <stdio.h>

//Declarar variáveis

int main(){

    //declaração da variável para receber dados da primeira carta

    char nome_da_cidade[60], cod_carta[4], estado;
    int populacao, pontos_turisticos;
    float PIB, area;

    /*declaração de variável para receber dados da segunda carta
    acrescentando o número 2 no final para diferenciar.*/

    char nome_da_cidade2[60], cod_carta2[4], estado2;
    int populacao2, pontos_turisticos2;
    float PIB2, area2;

        //Inicio do cadastro da primeira carta

        printf("\n**Cadastrando primeira carta**\n\n");

        printf("Escolha uma letra para representar o estado (A a H):");
        scanf(" %c", &estado );

        printf("Digite o código da carta(Ex: A01):");
        scanf(" %s", &cod_carta);

        printf("Digite o nome da cidade:");
        scanf(" %s", nome_da_cidade); //

        printf("Digite aproximadamente o valor total da população da cidade:");
        scanf(" %d", &populacao);

        printf("Informe quantos pontos turísticos tem na cidade:");
        scanf(" %d", &pontos_turisticos);

        printf("Qual o PIB da cidade?");
        scanf(" %f", &PIB);

        printf("Qual a área total em Km² da cidade?");
        scanf(" %f", &area );

        //ìnicio do cadastro da segunda carta

        printf("\n**Cadastrando segunda carta**\n\n");

        printf("Escolha uma letra para representar o estado (A a H):");
        scanf(" %c", &estado2 );

        printf("Digite o código da carta(Ex: A01):");
        scanf(" %3s", cod_carta2);

        printf("Digite o nome da cidade:");
        scanf(" %s", nome_da_cidade2); //

        printf("Digite aproximadamente o valor total da população da cidade:");
        scanf(" %d", &populacao2);

        printf("Informe quantos pontos turísticos tem na cidade:");
        scanf(" %d", &pontos_turisticos2);

        printf("Qual o PIB da cidade?");
        scanf(" %f", &PIB2);

        printf("Qual a área total em Km² da cidade?");
        scanf(" %f", &area2 );

            printf("\n**Primeira carta**\n");

            printf("\nCódigo da carta: %s\n", cod_carta);
            printf("Cidade: %s\n", nome_da_cidade);
            printf("População: %d\n", populacao);
            printf("Pontos turísticos: %d\n", pontos_turisticos);
            printf("PIB: %f\n", PIB);
            printf("Área: %.3f\n", area);

            printf("\n**Segunda carta**\n");

            printf("\nCódigo da carta: %s\n", cod_carta2);
            printf("Cidade: %s\n", nome_da_cidade2);
            printf("População: %d\n", populacao2);
            printf("Pontos turísticos: %d\n", pontos_turisticos2);
            printf("PIB: %f\n", PIB2);
            printf("Área: %.3f\n\n", area2);




    return 0;


}