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
int comparar(float v1, float v2, int maiorVence) {
    return maiorVence
        ? (v1 > v2 ? 1 :(v1 < v2 ? -1 : 0))  // quando maior vence
        : (v1 < v2 ? 1 :(v1 > v2 ? -1 : 0)); // quando menor vence
}

//funcoes auxiliares
void calcularAtributos(struct CartaSuperTrunfo *c){
    c->densidade = (float)c->populacao / c->area;
    c->pibPercapita = c->pib / c->populacao;
    c->superPoder = c->populacao + c->area + c->pib + c->NPT + c->pibPercapita + (1.0f / c->densidade);

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
void compararCartas(struct CartaSuperTrunfo c1, struct CartaSuperTrunfo c2, int escolha1, int escolha2) {
    int resultado = 0;
   // Primeiro atributo
    switch(escolha1) {
        case 1: resultado = comparar(c1.populacao, c2.populacao, 1); break;
        case 2: resultado = comparar(c1.area, c2.area, 1); break;
        case 3: resultado = comparar(c1.pib, c2.pib, 1); break;
        case 4: resultado = comparar(c1.NPT, c2.NPT, 1); break;
        case 5: resultado = comparar(c1.densidade, c2.densidade, 0); break;
        case 6: resultado = comparar(c1.pibPercapita, c2.pibPercapita, 1); break;
        default: resultado = 0;
    }

    // Desempate com segundo atributo
    if(resultado == 0) {
        switch(escolha2) {
            case 1: resultado = comparar(c1.populacao, c2.populacao, 1); break;
            case 2: resultado = comparar(c1.area, c2.area, 1); break;
            case 3: resultado = comparar(c1.pib, c2.pib, 1); break;
            case 4: resultado = comparar(c1.NPT, c2.NPT, 1); break;
            case 5: resultado = comparar(c1.densidade, c2.densidade, 0); break;
            case 6: resultado = comparar(c1.pibPercapita, c2.pibPercapita, 1); break;
            default: resultado = 0;
        }
    }

    // Resultado final
    if(resultado == 1) printf("Carta 1 (%s) vence!\n", c1.cidade);
    else if(resultado == -1) printf("Carta 2 (%s) vence!\n", c2.cidade);
    else printf("Empate!\n");
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
    int escolha1, escolha2;
    printf("\n=== MENU DE COMPARACAO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Escolha o atributo PRINCIPAL: \n");
    scanf("%d", &escolha1);
    printf("Escolha o atributo SECUNDARIO: \n");
    scanf("%d", &escolha2);
    // Compara cartas com base na escolha do usuario
    compararCartas(carta1, carta2, escolha1, escolha2);

        
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
