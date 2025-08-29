#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //Carta, Estado, Código, Nome Cidade, população, área, PIB, Num. DP turis
    // Usei o Struck para criar e organazar melhor as cartas separadamente  
    struct CartaSuperTrunfo  {
        char carta[3];
        char estado[20];
        int codigo;
        char cidade[20];
        int populacao;
        float area;
        float pib;
        int NPT;
    };

    struct CartaSuperTrunfo carta1 = {
        "01",
        "Para",
        1,
        "Belem",
        1500000,
        1068.0,
        50000.0,
        5
    };

    struct CartaSuperTrunfo carta2 = {
        "02",
        "Bahia",
        2,
        "Salvador",
        1600000,
        1070.0,
        80000.0,
        7
    };

    printf("Carta: %s\n", carta1.carta);
    printf("Estado: %s\n", carta1.estado);
    printf("Codigo: %d\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km quadrados\n", carta1.area);
    printf("PIB: %.2f bilhoes\n", carta1.pib);
    printf("N de pontos turisticos: %d\n", carta1.NPT);

    printf("Densidade populacional da carta e: %.2f hab/km\n", carta1.populacao / carta1.area);
    printf("PIB per capita da carta e: %2.f R$/hab\n", (carta1.pib * 1e9) / carta1.populacao);
    // printf("Densidade populacional da carta e: %.2f hab/km²\n", carta1.populacao / carta1.area);

    printf("\n");

    printf("Carta: %s\n", carta2.carta);
    printf("Estado: %s\n", carta2.estado);
    printf("Codigo: %d\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km quadrados\n", carta2.area);
    printf("PIB: %.2f bilhoes\n", carta2.pib);
    printf("N de pontos turisticos: %d\n", carta2.NPT);

    printf("Densidade populacional da carta e: %.2f hab/km\n", carta2.populacao / carta2.area);
    printf("PIB per capita da carta e: %2.f R$/hab\n", (carta2.pib * 1e9) / carta2.populacao);
   
    //  printf("Densidade populacional da carta e: %.2f hab/km²\n", carta2.populacao / carta2.area);
    
    
    
        
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
