Desafio Super Trunfo - Cidades

Este projeto é uma implementação em C de um jogo estilo Super Trunfo, focado em comparar cidades brasileiras com base em diferentes atributos.

O programa permite cadastrar cartas com informações de cidades e comparar duas cartas escolhidas pelo usuário em um menu interativo.

Funcionalidades

Cadastro de cartas com atributos:

Código da carta

Estado

Nome da cidade

População

Área (km²)

PIB (bilhões)

Número de pontos turísticos

Cálculo de atributos derivados:

Densidade populacional

PIB per capita

Super Poder (uma combinação dos atributos para possíveis regras extras)

Comparação de cartas:

Atributo principal e secundário escolhidos pelo usuário

Menu interativo no terminal

Estrutura do Código
Struct CartaSuperTrunfo
struct CartaSuperTrunfo {
    char carta[3];
    char estado[20];
    int codigo;
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int NPT; // Número de pontos turísticos

    float densidade;     
    float pibPercapita;  
    float superPoder;    
};

Funções Principais

comparar: Compara dois valores considerando se maior ou menor vence.

calcularAtributos: Calcula densidade, PIB per capita e super poder.

imprimirCarta: Exibe os atributos de uma carta.

compararCartas: Compara duas cartas com base nos atributos escolhidos.

Fluxo do Programa
flowchart TD
    A[Início] --> B[Criação de cartas]
    B --> C[Calcular atributos derivados]
    C --> D[Exibir menu para escolher atributos]
    D --> E[Comparar cartas]
    E --> F{Resultado}
    F -->|Carta 1 vence| G[Exibir vencedor: Carta 1]
    F -->|Carta 2 vence| H[Exibir vencedor: Carta 2]
    F -->|Empate| I[Exibir empate]
    G --> J[Fim]
    H --> J
    I --> J

Exemplo de Saída

Supondo duas cartas:

Carta 1: Belem, Pará
População: 1.500.000
Área: 1068.0 km²
PIB: 50.000.0 bilhões
Pontos turísticos: 5

Carta 2: Salvador, Bahia
População: 1.600.000
Área: 1070.0 km²
PIB: 80.000.0 bilhões
Pontos turísticos: 7


Menu interativo:

=== MENU DE COMPARACAO ===
1 - Populacao
2 - Area
3 - PIB
4 - Pontos Turisticos
5 - Densidade Populacional
6 - PIB per Capita
Escolha o atributo PRINCIPAL: 1
Escolha o atributo SECUNDARIO: 3


Resultado no terminal:

Carta 2 (Salvador) vence!

Como Usar

Compile o programa:

gcc super_trunfo.c -o super_trunfo


Execute:

./super_trunfo


Siga as instruções do menu para comparar cartas.