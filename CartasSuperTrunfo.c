#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("\n**SUPER TRUNFO DE CIDADES** \n\n");


    printf("Digite o nome da cidade: \n", cidade);
    scanf("%s: ", &cidade);

    printf("Digite o valor da população da cidade: \n", populacao);
    scanf("%d: ", &populacao);

    printf("Digite o valor da área da cidade: \n", area);
    scanf("%f", &area);

    printf("Digite o valor do PIB da cidade: \n", pib);
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos da cidade: \n", pontos_turisticos);
    scanf("%d", &pontos_turisticos);

    printf("Os atributos da sua carta são: \n");
    printf("Nome da cidade: %s - populacao: %d - Area: %f - PIB: %f - Pontos Turisticos: %d \n", cidade,populacao, area, pib, pontos_turisticos );
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
    }
