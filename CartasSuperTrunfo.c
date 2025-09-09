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

// Função para imprimir a carta
void imprimirCarta(struct CartaSuperTrunfo carta) {
    printf("Carta: %s\n", carta.carta);
    printf("Estado: %s\n", carta.estado);
    printf("Codigo: %d\n", carta.codigo);
    printf("Cidade: %s\n", carta.cidade);
    printf("Populacao: %d\n", carta.populacao);
    printf("Area: %.2f km quadrados\n", carta.area);
    printf("PIB: %.2f bilhoes\n", carta.pib);
    printf("N de pontos turisticos: %d\n", carta.NPT);
    printf("\n");
}

// funcao para comparar cartas
// usando void com swuitch case para comparar os atributos
// legibilidade organizacao do codigo substitui if else convencional
void compararCartas(struct CartaSuperTrunfo carta1, struct CartaSuperTrunfo carta2, int escolha) {
    switch(escolha) {
        case 1: // Populacao
            if (compararMaior(carta1.populacao, carta2.populacao)) {
                printf("Carta 1 vence na populacao!\n");
            } else if (compararMaior(carta2.populacao, carta1.populacao)){
                printf("Carta 2 vence na populacao!\n");
            } else {
                printf("Empate na populacao!\n");
            }
            break;
        case 2: // Area
            if (compararMaior(carta1.area, carta2.area)) {
                printf("Carta 1 vence na area!\n");
            } else if (compararMaior(carta2.area, carta1.area)) {
                printf("Carta 2 vence na area!\n");
            } else{
                printf("Empate na area!\n");
            }
            break;
        case 3: // PIB
            if (compararMaior(carta1.pib, carta2.pib)) {
                printf("Carta 1 vence no PIB!\n");
            } else if (compararMaior(carta2.pib, carta1.pib)) {
                printf("Carta 2 vence no PIB!\n");
            } else{
                printf("Empate no PIB!\n");
            }
            break;
        case 4: // NPT
            if (compararMaior(carta1.NPT, carta2.NPT)) {
                printf("Carta 1 vence nos pontos turisticos!\n");
            } else if (compararMaior(carta2.NPT, carta1.NPT)) {
                printf("Carta 2 vence nos pontos turisticos!\n");
            } else{
                printf("Empate nos pontos turisticos!\n");
            }
            break;
        case 5: // Densidade
            if (compararMenor(carta1.densidade, carta2.densidade)) {
                printf("Carta 1 vence na densidade populacional!\n");
            } else if (compararMenor(carta2.densidade, carta1.densidade)) {
                printf("Carta 2 vence na densidade populacional!\n");
            } else{
                printf("Empate na densidade populacional!\n");
            }
            break;
        case 6: // PIB per Capita
            if (compararMaior(carta1.pibPercapita, carta2.pibPercapita)) {
                printf("Carta 1 vence no PIB per capita!\n");
            } else if (compararMaior(carta2.pibPercapita, carta1.pibPercapita)) {
                printf("Carta 2 vence no PIB per capita!\n");
            } else {
                printf("Empate no PIB per capita!\n");
            }
            break;
        default:
            printf("Escolha invalida!\n");
    }
}


// int main - ponto de entrada do programa
// menu antigo printava todos atrib. das cartas
// agora menu interativo para comparar cartas com base em escolha do usuario
// escolha o atibuto no menu interativo e veja no terminal qual carta vence
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


      // Menu interativo
    int opcao;
    printf("\n=== MENU DE COMPARACAO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &opcao);

    // Compara cartas com base na escolha do usuario
    compararCartas(carta1, carta2, opcao);

        
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
