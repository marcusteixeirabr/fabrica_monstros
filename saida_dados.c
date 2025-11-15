#include <stdio.h>
#include "cores.h" 
#include "determinarFamilia.h" // Necessário para a função determinarFamilia

// O protótipo da função determinarFamilia, caso não esteja no .h
// int determinarFamilia(int monstro[]);

#ifndef SAIDADOS_H
#define SAIDADOS_H

void saidaDados(int monstro[]);

#endif

// Implementação da função
void saidaDados(int monstro[]) {

    // --- Vetores de Strings Necessários ---
    
    // 1. Tipos de Cabeça (é a única parte com nomes próprios)
    char* tipo_cabeca[]  = {"Franken", "Zombos", "Happy"};
    
    // 2. Nomes das Famílias (Usados para Passos 2 a 6 e Classificação Final)
    char* nome_familia[] = {"Wackus", "Vegitas", "Spritem"}; 
    
    // O valor '4' representa a opção NULA
    const int OPCAO_NULA = 4;
    
    // Contador para numeração dinâmica dos passos
    int contador_passos = 1;

    // --- Chamada da Função de Determinação da Família ---
    // A função retorna 1 (Wackus), 2 (Vegitas) ou 3 (Spritem)
    int familia_predominante = determinarFamilia(monstro);

    // --- Seção de Saída ---
    
    imprimirCiano("\n------------------------------------------------\n");
    imprimirAmarelo("  GUIA DE IDENTIFICACAO E RETRATO FALADO (RECEITA)\n");
    imprimirCiano("------------------------------------------------\n\n");
    
    imprimirVerde("==== INSTRUÇÕES PARA DESENHAR O MONSTRO =====\n");

    // --- Passo 1: Cabeça (OBRIGATÓRIO) ---
    // Usa tipo_cabeca[monstro[0] - 1]
    printf("Passo %d: Desenhe a cabeça formato: %s\n",
           contador_passos, tipo_cabeca[monstro[0] - 1]);
    contador_passos++;

    // --- Passo 2: Olhos (OBRIGATÓRIO) ---
    // Usa nome_familia[monstro[1] - 1]
    printf("Passo %d: Adicione olhos da Família: %s\n",
           contador_passos, nome_familia[monstro[1] - 1]);
    contador_passos++;

    // --- Partes Opcionais (Nariz, Boca, Cabelo, Anexo) ---
    
    // Verifica NULA (4) para pular o passo e não incrementar a contagem.
    
    // Passo X: Nariz (monstro[2])
    if (monstro[2] != OPCAO_NULA) {
        printf("Passo %d: Insira um nariz da Família: %s\n",
               contador_passos, nome_familia[monstro[2] - 1]);
        contador_passos++;
    }

    // Passo X: Boca (monstro[3])
    if (monstro[3] != OPCAO_NULA) {
        printf("Passo %d: A boca deve ser da Família: %s\n",
               contador_passos, nome_familia[monstro[3] - 1]);
        contador_passos++;
    }

    // Passo X: Cabelo (monstro[4])
    if (monstro[4] != OPCAO_NULA) {
        printf("Passo %d: Use o cabelo da Família: %s\n",
               contador_passos, nome_familia[monstro[4] - 1]);
        contador_passos++;
    }

    // Passo X: Anexo (monstro[5])
    if (monstro[5] != OPCAO_NULA) {
        printf("Passo %d: Adicione um anexo da Família: %s\n",
               contador_passos, nome_familia[monstro[5] - 1]);
        contador_passos++;
    }

    // --- Classificação Final ---
    
    printf("\n");
    imprimirVerde("==== CLASSIFICAÇÃO FINAL DO MONSTRO =====\n");
    
    // Passo Final: Exibe o resultado usando a Cabeça e o resultado da Família
    printf("Passo %d: ", contador_passos);
    imprimirAmarelo(">>> CLASSIFICAÇÃO: %s %s <<<\n", 
           tipo_cabeca[monstro[0] - 1], nome_familia[familia_predominante - 1]);
    
    imprimirCiano("\n------------------------------------------------\n\n");
}