#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa




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

    //criando parte de comparacao
    float densidade;
    float pibPercapita;
    float superPoder;
};

//funcao comparador
int compararMaior(float v1, float v2) {
    return v1 > v2 ? 1 : 0; // 1 = Carta 1 vence, 0 = Carta 2 vence
}

int compararMenor(float v1, float v2) {
    return v1 < v2 ? 1 : 0; // 1 = Carta 1 vence, 0 = Carta 2 vence
}

//funcoes auxiliares
void calcularAtributos(struct CartaSuperTrunfo *c){
    c->densidade = (float)c->populacao / c->area;
    c->superPoder = c->pib / c->populacao;
    c->superPoder = c->populacao 
                
            + c->area 
            + c->pib 
            + c->NPT 
            + c->pibPercapita 
            + (1.0f / c->densidade);
};

int main() {

    struct CartaSuperTrunfo carta1 = {

        "01","Para",1,"Belem",1500000,1068.0,50000.0,5

    };

    struct CartaSuperTrunfo carta2 = {

        "02","Bahia",2,"Salvador",1600000,1070.0,80000.0,7

    };

    // Calcula atributos
    calcularAtributos(&carta1);
    calcularAtributos(&carta2);

    printf("Carta: %s\n", carta1.carta);
    printf("Estado: %s\n", carta1.estado);
    printf("Codigo: %d\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km quadrados\n", carta1.area);
    printf("PIB: %.2f bilhoes\n", carta1.pib);
    printf("N de pontos turisticos: %d\n", carta1.NPT);

    printf("Densidade populacional da carta e: %.2f hab/km\n", carta1.densidade);
    printf("PIB per capita da carta e: %2.f R$/hab\n", carta1.pibPercapita);
    // printf("Densidade populacional da carta e: %.2f hab/km²\n", carta1.populacao / carta1.area);

    printf("Super poder: %2f\n\n", carta1.superPoder);

    printf("\n");

    printf("Carta: %s\n", carta2.carta);
    printf("Estado: %s\n", carta2.estado);
    printf("Codigo: %d\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km quadrados\n", carta2.area);
    printf("PIB: %.2f bilhoes\n", carta2.pib);
    printf("N de pontos turisticos: %d\n", carta2.NPT);

    printf("Densidade populacional: %.2f hab/km\n", carta2.densidade);
    printf("PIB per capita: %2.f R$/hab\n", carta2.superPoder);
    //  printf("Densidade populacional da carta e: %.2f hab/km²\n", carta2.populacao / carta2.area);
    
    printf("Super poder: %2f\n\n", carta2.superPoder);

        // --- Comparações ---
    printf("===== Comparacao =====\n");
    printf("Populacao: Carta %d venceu (%d)\n",
           compararMaior(carta1.populacao, carta2.populacao) ? 1 : 2,
           compararMaior(carta1.populacao, carta2.populacao));

    printf("Area: Carta %d venceu (%d)\n",
           compararMaior(carta1.area, carta2.area) ? 1 : 2,
           compararMaior(carta1.area, carta2.area));

    printf("PIB: Carta %d venceu (%d)\n",
           compararMaior(carta1.pib, carta2.pib) ? 1 : 2,
           compararMaior(carta1.pib, carta2.pib));

    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
           compararMaior(carta1.NPT, carta2.NPT) ? 1 : 2,
           compararMaior(carta1.NPT, carta2.NPT));

    printf("Densidade: Carta %d venceu (%d)\n",
           compararMenor(carta1.densidade, carta2.densidade) ? 1 : 2,
           compararMenor(carta1.densidade, carta2.densidade));

    printf("PIB per Capita: Carta %d venceu (%d)\n",
           compararMaior(carta1.pibPercapita, carta2.pibPercapita) ? 1 : 2,
           compararMaior(carta1.pibPercapita, carta2.pibPercapita));

    printf("Super Poder: Carta %d venceu (%d)\n",
           compararMaior(carta1.superPoder, carta2.superPoder) ? 1 : 2,
           compararMaior(carta1.superPoder, carta2.superPoder));
    
    
        
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
