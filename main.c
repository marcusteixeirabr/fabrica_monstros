#include <stdio.h>

// Definições das cores
#define COR_VERMELHO   "\033[1;31m"
#define COR_VERDE      "\033[1;32m"
#define COR_AMARELO    "\033[1;33m"
#define COR_AZUL       "\033[1;34m"
#define COR_MAGENTA    "\033[1;35m"
#define COR_CIANO      "\033[1;36m"
#define COR_BRANCO     "\033[1;37m"
#define COR_RESET      "\033[0m"

void menuPrincipal();
int lerInteiroValido(char* pergunta, int min, int max);
void criarMonstro(int* buffer);
void saidaDados(int monstro[]);
int determinarFamilia(int const* buffer);
void imprimirVermelho(const char* msg);
void imprimirCiano(const char* msg);
void imprimirAmarelo(const char* msg);
void imprimirVerde(const char* msg);


// Implementação da função main por João Wictor
int main() {

    int monstro[6];   // vetor que guarda o monstro
    int opcao;


    menuPrincipal();  // Mostra o menu inicial

    do {

        opcao = lerInteiroValido("\nEscolha uma opcao: ", 0, 4);

        // ------------------------------------------
        // OPÇÃO 1 – Criar monstro interativamente
        // ------------------------------------------
        if (opcao == 1) {

            criarMonstro(monstro);
            saidaDados(monstro);
        }

        // ------------------------------------------
        // OPÇÃO 2 – Modelo: Franken Wackus
        // ------------------------------------------
        else if (opcao == 2) {

            monstro[0] = 1;
            monstro[1] = 1;
            monstro[2] = 1;
            monstro[3] = 1;
            monstro[4] = 1;
            monstro[5] = 1;

            saidaDados(monstro);
        }

        // ------------------------------------------
        // OPÇÃO 3 – Modelo: Zombos Vegitas
        // ------------------------------------------
        else if (opcao == 3) {

            monstro[0] = 2;
            monstro[1] = 2;
            monstro[2] = 2;
            monstro[3] = 2;
            monstro[4] = 2;
            monstro[5] = 2;

            saidaDados(monstro);
        }

        // ------------------------------------------
        // OPÇÃO 4 – Modelo: Happy Spritem
        // ------------------------------------------
        else if (opcao == 4) {

            monstro[0] = 3;
            monstro[1] = 3;
            monstro[2] = 3;
            monstro[3] = 3;
            monstro[4] = 3;
            monstro[5] = 3;

            saidaDados(monstro);
        }

        // ------------------------------------------
        // OPÇÃO 0 – SAIR DO SISTEMA
        // ------------------------------------------
        else if (opcao == 0) {

            imprimirVermelho("\nSaindo do programa...\n");
            return 0;
        }

        menuPrincipal(); // Mostra menu depois de cada operação

    } while (1);
}


// Implementação da função menuPrincipal por Igor Henrique
void menuPrincipal() {
    printf("FÁBRICA DE MONSTROS\n");
    printf("Sistema de Classificação de Monstros de Zuron\n\n");
    printf("1 - Criar monstro interativamente\n");
    printf("2 - Usar monstro exemplo (Franken Wackus)\n");
    printf("3 - Usar monstro exemplo (Zombos Vegitas)\n");
    printf("4 - Usar monstro exemplo (Happy Sprintem)\n");
    printf("0 - Sair");
}


// Implementação da função lerInteiroValido por Gustavo Coelho
int lerInteiroValido(char* pergunta,int min,int max) {
    int input;
    printf("%s",pergunta); // Printa a pergunta
    do {
        if (scanf("%d", &input) == 1) { // Se a escolha do usuario eh um inteiro entao
            if (input >= min && input <= max) { 
                return input;
            }
        }
        printf("Numero fora do intervalo (%d a %d). Tente novamente.\n", min, max);
        while (getchar() != '\n');
    } while (1);
}

// Implementação da função criarMonstro por Jhony Pereira
void criarMonstro(int* buffer) {
    imprimirCiano("\n----------------------------------------------\n");
    imprimirAmarelo("          CRIACAO DE UM NOVO MONSTRO\n");
    imprimirCiano("----------------------------------------------\n\n");

    char* perguntas[] = {
        "1) Formato da cabeca:\n   [1] Franken  [2] Zombos  [3] Happy\n> ",
        "2) Tipo dos olhos:\n   [1] Wackus   [2] Vegitas [3] Spritem\n> ",
        "3) Tipo do nariz:\n   [1] Wackus   [2] Vegitas [3] Spritem [4] Nula\n> ",
        "4) Tipo da boca:\n   [1] Wackus   [2] Vegitas [3] Spritem [4] Nula\n> ",
        "5) Tipo do cabelo:\n   [1] Wackus   [2] Vegitas [3] Spritem [4] Nula\n> ",
        "6) Tipo do anexo:\n   [1] Wackus   [2] Vegitas [3] Spritem [4] Nula\n> "
    };

    const int limites[] = { 3, 3, 4, 4, 4, 4 };
    const int totalPerguntas = sizeof(perguntas) / sizeof(perguntas[0]);

    const char* opCabeca[] = { "Franken", "Zombos", "Happy" };
    const char* opOlhos[] = { "Wackus", "Vegitas", "Spritem" };
    const char* opNariz[] = { "Wackus", "Vegitas", "Spritem", "Nula" };
    const char* opBoca[] = { "Wackus", "Vegitas", "Spritem", "Nula" };
    const char* opCabelo[] = { "Wackus", "Vegitas", "Spritem", "Nula" };
    const char* opAnexo[] = { "Wackus", "Vegitas", "Spritem", "Nula" };

    const char** opcoes[] = { opCabeca, opOlhos, opNariz, opBoca, opCabelo, opAnexo };

    for (int i = 0; i < totalPerguntas; i++) {
        buffer[i] = lerInteiroValido(perguntas[i], 1, limites[i]);
    }

    const char* partes[] = {
        "Cabeca", "Olhos", "Nariz", "Boca", "Cabelo", "Anexo"
    };

    imprimirVerde("\nMonstro criado com sucesso!\n");
    imprimirCiano("----------------------------------------------\n");

    for (int i = 0; i < totalPerguntas; i++) {
        printf("%-8s: %s\n", partes[i], opcoes[i][buffer[i] - 1]);
    }

    imprimirCiano("----------------------------------------------\n\n");
}


// Implementação da função determinarFamilia por Marcus Silva
int determinarFamilia(int const *buffer) {
    int wackus = 0, vegitas = 0, spritem = 0;
    for (int i = 1; i < 6; i++) {
        if (buffer[i] == 1) {
            wackus++;
        } else if (buffer[i] == 2) {
            vegitas++;
        } else if (buffer[i] == 3) {
            spritem++;
        }
    }

    printf("\nContagem de características:\n");
    printf("- Wackus  = %d\n", wackus);
    printf("- Vegitas = %d\n", vegitas);
    printf("- Spritem = %d\n", spritem);

    int vencedor;
    if (wackus > vegitas && wackus > spritem) {
        vencedor = 1;
    } else if (vegitas > wackus && vegitas > spritem) {
        vencedor = 2;
    } else if (spritem > wackus && spritem > vegitas) {
        vencedor = 3;
    } else {
        vencedor = buffer[1];
    }
    return vencedor;
}


// Implementação da função saidaDados por Luiz Fernandes
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
    char mensagem[100];
    sprintf(mensagem, ">>> CLASSIFICAÇÃO: %s %s <<<\n", tipo_cabeca[monstro[0] - 1], nome_familia[familia_predominante - 1]);
    imprimirAmarelo(mensagem);
    imprimirCiano("\n------------------------------------------------\n\n");
}


// Implementação das funçãos de cores por Jhony Pereira
void imprimirVermelho(const char* texto) {
    printf("%s%s%s", COR_VERMELHO, texto, COR_RESET);
}
void imprimirVerde(const char* texto) {
    printf("%s%s%s", COR_VERDE, texto, COR_RESET);
}
void imprimirAmarelo(const char* texto) {
    printf("%s%s%s", COR_AMARELO, texto, COR_RESET);
}
void imprimirCiano(const char* texto) {
    printf("%s%s%s", COR_CIANO, texto, COR_RESET);
}
void imprimirTitulo(const char* texto) {
    printf("%s%s%s\n", COR_CIANO, texto, COR_RESET);
}
