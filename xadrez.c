#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

// -------------------------------------------
// Requisito: Uso de Constantes para facilitar a escrita do código
// -------------------------------------------
#define MOV_BISPO 5      // Casas na diagonal superior direita
#define MOV_TORRE 5      // Casas para a direita
#define MOV_RAINHA 8     // Casas para a esquerda
#define MAX_MOV_RAINHA 8 // Limite para o loop 'do-while' da Rainha

// -------------------------------------------
// Requisito: Código Bem Documentado
// -------------------------------------------

int main() {
    printf("==========================================\n");
    printf("   MateCheck - Desafio de Xadrez (Novato)   \n");
    printf("==========================================\n\n");

    // ----------------------------------------------------
    // Requisito: Movimentação do BISPO - 5 casas (Diagonal Superior Direita)
    // Requisito: Utiliza a Estrutura de Repetição 'for'
    // ----------------------------------------------------

    printf("--- ♟️ Movimentação do BISPO (5 Casas na Diagonal Superior Direita) ---\n");
    // Declaração manual das variáveis (requisito de Entrada de Dados)
    int i; 
    
    // O loop 'for' é ideal quando se sabe exatamente o número de repetições (5)
    for (i = 0; i < MOV_BISPO; i++) {
        // Requisito: Bispo se move na diagonal. Para movê-lo, utiliza-se 
        // a combinação de direções básicas no printf.
        printf("Movimento %d: ", i + 1);
        printf("Cima\n");      // Movimento Vertical (Cima)
        printf("Direita\n");   // Movimento Horizontal (Direita)
        printf("\n"); // Para clareza na saída
    }
    
    printf("\n----------------------------------------------------\n\n");

    // ----------------------------------------------------
    // Requisito: Movimentação da TORRE - 5 casas para a direita
    // Requisito: Utiliza a Estrutura de Repetição 'while'
    // ----------------------------------------------------

    printf("--- ♜ Movimentação da TORRE (5 Casas para a Direita) ---\n");
    // Declaração manual das variáveis (requisito de Entrada de Dados)
    int casas_torre = MOV_TORRE; // Inicializa com o número de movimentos a fazer
    int contador_torre = 0;      // Contador para acompanhar os movimentos

    // O loop 'while' é ideal quando a condição de parada é clara, mas 
    // a contagem de movimentos é gerenciada dentro do loop.
    while (contador_torre < casas_torre) {
        printf("Movimento %d: ", contador_torre + 1);
        printf("Direita\n"); // Apenas a direção 'Direita'
        contador_torre++;    // Incrementa o contador
        printf("\n");
    }
    
    printf("\n----------------------------------------------------\n\n");

    // ----------------------------------------------------
    // Requisito: Movimentação da RAINHA - 8 casas para a esquerda
    // Requisito: Utiliza a Estrutura de Repetição 'do-while'
    // ----------------------------------------------------

    printf("--- ♛ Movimentação da RAINHA (8 Casas para a Esquerda) ---\n");
    // Declaração manual das variáveis (requisito de Entrada de Dados)
    int j = 0; // Contador para o 'do-while'
    
    // O loop 'do-while' garante que o corpo do loop será executado pelo menos uma vez,
    // e repete enquanto a condição for verdadeira.
    do {
        printf("Movimento %d: ", j + 1);
        printf("Esquerda\n"); // Apenas a direção 'Esquerda'
        j++; // Incrementa o contador

        // Condição do 'do-while': repete enquanto o contador for menor que 8 (MOV_RAINHA)
    } while (j < MAX_MOV_RAINHA);
    
    printf("\n==========================================\n");
    printf("Resultados da Avaliação de Desempenho Concluídos.\n");
    printf("==========================================\n");

    return 0;
}